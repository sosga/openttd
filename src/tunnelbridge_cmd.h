/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file tunnelbridge_cmd.h Command definitions related to tunnels and bridges. */

#ifndef TUNNELBRIDGE_CMD_H
#define TUNNELBRIDGE_CMD_H

#include "command_type.h"
#include "transport_type.h"
#include "bridge.h"

CommandCost CmdBuildBridge(DoCommandFlags flags, TileIndex tile_end, TileIndex tile_start, TransportType transport_type, BridgeType bridge_type, uint8_t road_rail_type);
CommandCost CmdBuildTunnel(DoCommandFlags flags, TileIndex start_tile, TransportType transport_type, uint8_t road_rail_type);

DEF_CMD_TRAIT(CMD_BUILD_BRIDGE, CmdBuildBridge, CommandFlags({CommandFlag::Deity, CommandFlag::Auto, CommandFlag::NoWater}), CMDT_LANDSCAPE_CONSTRUCTION)
DEF_CMD_TRAIT(CMD_BUILD_TUNNEL, CmdBuildTunnel, CommandFlags({CommandFlag::Deity, CommandFlag::Auto}),                       CMDT_LANDSCAPE_CONSTRUCTION)

void CcBuildBridge(Commands cmd, const CommandCost &result, TileIndex end_tile, TileIndex tile_start, TransportType transport_type, BridgeType, uint8_t);

#endif /* TUNNELBRIDGE_CMD_H */
