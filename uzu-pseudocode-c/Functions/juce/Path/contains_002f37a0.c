// Function : contains
// Namespace: juce:Path
// Entry    : 002f37a0
// Prototype: uint contains(float param_1, float param_2, undefined8 * param_3)
// Body     : 002f37a0 - 002f3912


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Path::contains(float, float, float) const */

uint __cdecl juce::Path::contains(float param_1,float param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  void *local_38;
  void *local_30;
  undefined8 local_28;
  
  uVar2 = 0;
  if ((((*(float *)(param_3 + 2) < param_1) && (param_1 < *(float *)((long)param_3 + 0x14))) &&
      (*(float *)(param_3 + 3) < param_2)) && (param_2 < *(float *)((long)param_3 + 0x1c))) {
    local_78 = 0;
    local_80 = 0;
    local_74 = 0xffffffff;
    local_68 = ZEXT416(DAT_005d9038);
    local_58 = 0x3f800000;
    local_50 = *param_3;
    local_48 = 0x3f800000;
    local_40 = 0;
    local_3c = 1;
    local_70 = param_3;
    local_38 = malloc(0x80);
    local_28 = 0x20;
    iVar4 = 0;
    iVar3 = 0;
    local_30 = local_38;
    while (uVar1 = PathFlatteningIterator::next((PathFlatteningIterator *)&local_88),
          (char)uVar1 != '\0') {
      if ((((local_84 <= param_2) && (param_2 < local_80._4_4_)) ||
          ((local_80._4_4_ <= param_2 && (param_2 < local_84)))) &&
         (((param_2 - local_84) * ((float)local_80 - local_88)) / (local_80._4_4_ - local_84) +
          local_88 <= param_1)) {
        if (local_80._4_4_ <= local_84) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
      }
    }
    uVar2 = (uint)(iVar4 != iVar3);
    if (*(char *)(param_3 + 4) == '\0') {
      uVar2 = iVar3 + iVar4;
    }
    free(local_38);
  }
  return uVar2 & 0xffffff01;
}


