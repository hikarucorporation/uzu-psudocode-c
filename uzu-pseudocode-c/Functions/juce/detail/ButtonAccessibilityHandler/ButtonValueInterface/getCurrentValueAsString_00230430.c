// Function : getCurrentValueAsString
// Namespace: juce:detail:ButtonAccessibilityHandler:ButtonValueInterface
// Entry    : 00230430
// Prototype: undefined8 * getCurrentValueAsString(undefined8 * param_1, long param_2)
// Body     : 00230430 - 0023053b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ButtonAccessibilityHandler::ButtonValueInterface::getCurrentValueAsString() const
    */

undefined8 * __cdecl
juce::detail::ButtonAccessibilityHandler::ButtonValueInterface::getCurrentValueAsString
          (undefined8 *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long local_30;
  undefined1 local_28 [8];
  
                    /* try { // try from 0023044b to 00230452 has its CatchHandler @ 0023054c */
  (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x1c0) + 0x10))(&local_30);
                    /* try { // try from 0023045d to 00230462 has its CatchHandler @ 00230544 */
  cVar1 = (**(code **)(local_30 + 0x30))(local_28);
                    /* try { // try from 0023046a to 0023046f has its CatchHandler @ 0023053c */
  (**(code **)(local_30 + 0x58))(local_28);
  pbVar9 = &DAT_005e6417;
  if (cVar1 != '\0') {
    pbVar9 = &DAT_005e641b;
  }
  bVar2 = *pbVar9;
  if (bVar2 == 0) {
    pbVar4 = &DAT_0061ac58;
  }
  else {
    lVar7 = 0;
    pbVar4 = pbVar9;
    do {
      pbVar4 = pbVar4 + 1;
      lVar6 = lVar7 + (ulong)(bVar2 >> 7);
      lVar7 = lVar6 + 1;
      bVar2 = *pbVar4;
    } while (bVar2 != 0);
    uVar8 = lVar6 + 5U & 0xfffffffffffffffc;
    puVar3 = operator_new__(uVar8 + 0x17);
    LOCK();
    *puVar3 = 0;
    UNLOCK();
    *(ulong *)(puVar3 + 2) = uVar8;
    pbVar4 = (byte *)(puVar3 + 4);
    bVar2 = *pbVar9;
    pbVar5 = pbVar4;
    if (bVar2 != 0) {
      do {
        pbVar9 = pbVar9 + 1;
        if ((char)bVar2 < '\0') {
          *pbVar5 = bVar2 >> 6 | 0xc0;
          pbVar5[1] = bVar2 & 0x3f | 0x80;
          pbVar5 = pbVar5 + 1;
        }
        else {
          *pbVar5 = bVar2;
        }
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar9;
      } while (bVar2 != 0);
    }
    *pbVar5 = 0;
  }
  *param_1 = pbVar4;
  return param_1;
}


