#pragma once

#include "Export.h"
#include "DataDefs.h"

namespace df {
    struct squad;

    union squad_use_flags;
}

namespace DFHack
{
namespace Military
{

DFHACK_EXPORT std::string getSquadName(int32_t squad_id);
DFHACK_EXPORT df::squad* makeSquad(int32_t assignment_id);
DFHACK_EXPORT void updateRoomAssignments(int32_t squad_id, int32_t civzone_id, df::squad_use_flags flags);
DFHACK_EXPORT bool removeFromSquad(int32_t unit_id);
DFHACK_EXPORT bool addToSquad(int32_t unit_id, int32_t squad_id, int32_t squad_pos = -1);

}
}
