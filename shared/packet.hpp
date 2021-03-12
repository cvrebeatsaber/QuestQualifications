#pragma once

#include <stdint.h>
#include "protobuf/Models/packet_type.pb.h"
#include "protobuf/Models/Packets/acknowledgement.pb.h"
#include "protobuf/Models/Packets/command.pb.h"
#include "protobuf/Models/Packets/connect.pb.h"
#include "protobuf/Models/Packets/connect_response.pb.h"
#include "protobuf/Models/Packets/event.pb.h"
#include "protobuf/Models/Packets/file.pb.h"
#include "protobuf/Models/Packets/forwarding_packet.pb.h"
#include "protobuf/Models/Packets/loaded_song.pb.h"
#include "protobuf/Models/Packets/load_song.pb.h"
#include "protobuf/Models/Packets/play_song.pb.h"
#include "protobuf/Models/Packets/response.pb.h"
#include "protobuf/Models/Packets/score_request.pb.h"
#include "protobuf/Models/Packets/score_request_response.pb.h"
#include "protobuf/Models/Packets/song_finished.pb.h"
#include "protobuf/Models/Packets/song_list.pb.h"
#include "protobuf/Models/Packets/submit_score.pb.h"
#include <ostream>
#include <istream>
#include <google/protobuf/message.h>
#include "beatsaber-hook/shared/utils/utils.h"
#include <optional>
#include "logging.hpp"

namespace TournamentAssistantShared::Models {
    struct Packet {
        char id[16];
        char from[16];
        PacketType type;
        int size;
        google::protobuf::Message* specificPacket;

        Packet(PacketType type_, google::protobuf::Message* pkt) : type(type_), size(0), specificPacket(pkt) {
            if (pkt != nullptr) {
                size = pkt->ByteSizeLong();
            }
        }

        Packet() = default;
        ~Packet() {
            delete specificPacket;
        }

        void ToBytes(std::ostream& stream) {
            stream.write("moon", 4);
            stream << type;
            // Size
            stream << size;
            stream.write(from, 16);
            stream.write(id, 16);
            // If size > 0
            if (size > 0 && specificPacket != nullptr) {
                CRASH_UNLESS(specificPacket->SerializeToOstream(std::addressof(stream)));
            }
        }

        static std::optional<Packet> Parse(std::istream& stream) {
            char tmp[4];
            stream.read(tmp, 4);
            if (strcmp(tmp, "moon")) {
                // fail, magic does not match
                return std::nullopt;
            }
            Packet outp;
            int type;
            stream >> type;
            outp.type = (PacketType)type;
            stream >> outp.size;
            stream.read(outp.from, 16);
            stream.read(outp.id, 16);
            if (outp.size > 0) {
                // Parse specific packet
                if (type == PacketType::Command) {
                    auto specificPacket = new Packets::Command();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::Connect) {
                    auto specificPacket = new Packets::Connect();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::ConnectResponse) {
                    auto specificPacket = new Packets::ConnectResponse();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::Event) {
                    auto specificPacket = new Packets::Event();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::File) {
                    auto specificPacket = new Packets::File();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::ForwardingPacket) {
                    auto specificPacket = new Packets::ForwardingPacket();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::LoadedSong) {
                    auto specificPacket = new Packets::LoadedSong();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::LoadSong) {
                    auto specificPacket = new Packets::LoadSong();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::PlaySong) {
                    auto specificPacket = new Packets::PlaySong();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::Response) {
                    auto specificPacket = new Packets::Response();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::ScoreRequest) {
                    auto specificPacket = new Packets::ScoreRequest();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::ScoreRequestResponse) {
                    auto specificPacket = new Packets::ScoreRequestResponse();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::SongFinished) {
                    auto specificPacket = new Packets::SongFinished();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::SongList) {
                    auto specificPacket = new Packets::SongList();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::SubmitScore) {
                    auto specificPacket = new Packets::SubmitScore();
                    specificPacket->ParseFromIstream(std::addressof(stream));
                    outp.specificPacket = specificPacket;
                }
                else if (type == PacketType::Acknowledgement) {
                    outp.specificPacket = nullptr;
                }
                else {
                    getLogger().critical("Unknown packet type! %d", type);
                    CRASH_UNLESS(false);
                }
            }
            return outp;
        }
    };
}