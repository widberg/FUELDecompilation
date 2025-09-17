#include "InGamePauseHUD.h"

#include "Name_Z.h"
#include "String_Z.h"

#if USE_NON_MATCHING && __widberg__
int __usercall InGamePauseHUD_VehicleAllowed@<eax>(InGamePauseHUD *this_@<esi>, VehicleData *iVehicleData@<edi>)
{
    DELINKFUNCTION(0x00479130);
    if (!iVehicleData)
        return 0;

    if (iVehicleData->id != Name_Z::GetID(0, (const U8 *)"MESH_ID_BONUS_ROAD_3"))
        return 1;

    if (this_->a != 2)
        return 0;

    if (!this_->b)
        return 0;

    if (!Str_Z::CmpNoCase("TTCsaltlake", this_->b->name))
        return 2;

    return 0;
}
#endif // USE_NON_MATCHING && __widberg__
