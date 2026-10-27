// Function : toLowerCase
// Namespace: juce:String
// Entry    : 004a5cf0
// Prototype: undefined8 * toLowerCase(undefined8 * param_1, undefined8 * param_2)
// Body     : 004a5cf0 - 004a5e86


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::toLowerCase() const */

undefined8 * __cdecl juce::String::toLowerCase(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  wint_t wVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_50;
  byte *local_48;
  undefined4 *local_40;
  long local_38;
  undefined8 local_30;
  
  local_48 = (byte *)*param_2;
  local_50 = (undefined4 *)&DAT_0061ac58;
  local_40 = (undefined4 *)0x0;
  local_38 = *(long *)(local_48 + -8);
  local_30 = 0;
  uVar5 = local_38 + 4U & 0xfffffffffffffffc;
  local_50 = operator_new__(uVar5 + 0x17);
  LOCK();
  *local_50 = 0;
  UNLOCK();
  *(ulong *)(local_50 + 2) = uVar5;
  *(undefined1 *)(local_50 + 4) = 0;
  local_50 = local_50 + 4;
  pbVar2 = local_48;
  local_40 = local_50;
  while( true ) {
    local_48 = pbVar2;
    bVar1 = *local_48;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar7 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar7 = uVar7 & 0x7f;
      }
      else {
        uVar6 = uVar7 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar6 = 0x3f;
        }
        uVar7 = uVar6 & uVar7;
        if (((((local_48[1] & 0xc0) == 0x80) &&
             (uVar7 = local_48[1] & 0x3f | uVar7 << 6, (bVar1 & 0x20) != 0)) &&
            ((local_48[2] & 0xc0) == 0x80)) &&
           ((uVar7 = local_48[2] & 0x3f | uVar7 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
            ((local_48[3] & 0xffffffc0) == 0x80)))) {
          uVar7 = uVar7 << 6 | local_48[3] & 0x3f;
        }
      }
    }
    wVar3 = towlower(uVar7);
                    /* try { // try from 004a5e17 to 004a5e20 has its CatchHandler @ 004a5e87 */
    StringCreationHelper::write((StringCreationHelper *)&local_50,wVar3);
    if (wVar3 == 0) break;
    bVar1 = *local_48;
    pbVar2 = local_48 + 1;
    if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
      lVar4 = 4 - (ulong)((bVar1 & 0x10) == 0);
      if ((bVar1 & 0x20) == 0) {
        lVar4 = 2;
      }
      pbVar2 = local_48 + lVar4;
    }
  }
  *param_1 = local_50;
  return param_1;
}


