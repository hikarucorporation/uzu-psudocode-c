// Function : drawButtonText
// Namespace: juce:LookAndFeel_V2
// Entry    : 001eb460
// Prototype: undefined drawButtonText(long * param_1, Graphics * param_2, Component * param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 001eb460 - 001eb69f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::drawButtonText(juce::Graphics&, juce::TextButton&, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::drawButtonText
          (long *param_1,Graphics *param_2,Component *param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  SharedFontInternal *pSVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  Component *pCVar7;
  double dVar8;
  int iVar9;
  undefined8 extraout_RDX;
  int iVar10;
  float fVar11;
  uint uVar12;
  SharedFontInternal *local_48;
  float local_3c;
  long local_38;
  undefined1 local_30 [8];
  
  (**(code **)(*param_1 + 0xa0))(&local_48,param_1,param_3,*(undefined4 *)(param_3 + 0x44));
  if (param_2[0x10] != (Graphics)0x0) {
    param_2[0x10] = (Graphics)0x0;
                    /* try { // try from 001eb497 to 001eb4a9 has its CatchHandler @ 001eb6c2 */
    (**(code **)(**(long **)(param_2 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_2 + 8) + 0xf8))(*(long **)(param_2 + 8),&local_48);
                    /* try { // try from 001eb4b5 to 001eb4bc has its CatchHandler @ 001eb6ba */
  (**(code **)(**(long **)(param_3 + 0x1c0) + 0x10))(&local_38);
                    /* try { // try from 001eb4c7 to 001eb4cc has its CatchHandler @ 001eb6b2 */
  uVar4 = (**(code **)(local_38 + 0x30))(local_30);
                    /* try { // try from 001eb4d4 to 001eb4d9 has its CatchHandler @ 001eb6aa */
  (**(code **)(local_38 + 0x58))(local_30);
                    /* try { // try from 001eb4e3 to 001eb556 has its CatchHandler @ 001eb6c4 */
  uVar6 = Component::findColour(param_3,uVar4 & 0xff | 0x1000102,'\0');
  pCVar7 = param_3;
  do {
    uVar4 = (uint)(uVar6 >> 0x18);
    if ((*(ushort *)(pCVar7 + 0xe8) & 0x8000) != 0) {
      dVar8 = (double)((float)(uVar4 & 0xff) * DAT_005d9044);
      goto LAB_001eb528;
    }
    pCVar7 = *(Component **)(pCVar7 + 0x30);
  } while (pCVar7 != (Component *)0x0);
  dVar8 = (double)(uVar4 & 0xff);
LAB_001eb528:
  dVar8 = dVar8 + DAT_005d9098;
  iVar9 = 0xff;
  if (SUB84(dVar8,0) < 0xff) {
    iVar9 = SUB84(dVar8,0);
  }
  Graphics::setColour(param_2,(uint)uVar6 & 0xffffff | iVar9 << 0x18);
  iVar9 = *(int *)(param_3 + 0x44);
  iVar10 = *(int *)(param_3 + 0x40);
  dVar2 = (double)((float)iVar9 * DAT_005d9088) + DAT_005d9098;
  uVar6 = 4;
  if (SUB84(dVar2,0) < 4) {
    uVar6 = (ulong)dVar2 & 0xffffffff;
  }
  if (iVar10 < iVar9) {
    iVar9 = iVar10;
  }
  fVar11 = *(float *)(local_48 + 100);
  if (fVar11 <= 0.0) {
    local_3c = *(float *)(local_48 + 0x68);
                    /* try { // try from 001eb5b0 to 001eb5b7 has its CatchHandler @ 001eb6a0 */
    uVar3 = Font::SharedFontInternal::getAscentDescent
                      (local_48,(long *)&local_48,extraout_RDX,dVar8,param_5,param_6);
    fVar11 = local_3c * ((float)((ulong)uVar3 >> 0x20) + (float)uVar3);
    iVar10 = *(int *)(param_3 + 0x40);
  }
  uVar12 = SUB84((double)(fVar11 * DAT_005d98e8) + DAT_005d9098,0);
  uVar4 = (iVar9 / 2) / (int)((*(uint *)(param_3 + 0x1b0) & 1) * 2 + 2) + 2;
  if ((int)uVar12 <= (int)uVar4) {
    uVar4 = uVar12;
  }
  uVar5 = (iVar9 / 2) / (int)((*(uint *)(param_3 + 0x1b0) & 2) + 2) + 2;
  if ((int)uVar12 <= (int)uVar5) {
    uVar5 = uVar12;
  }
  iVar10 = iVar10 - (uVar5 + uVar4);
  if (0 < iVar10) {
                    /* try { // try from 001eb65b to 001eb67c has its CatchHandler @ 001eb6a8 */
    Graphics::drawFittedText
              (0,DAT_005d9960,(long)param_2,(long *)(param_3 + 0x158),(ulong)uVar4 | uVar6 << 0x20,
               CONCAT44(*(int *)(param_3 + 0x44) + (int)uVar6 * -2,iVar10),(uint *)0x24,2);
  }
  if (local_48 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar1 = local_48 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_48 + 8))();
    }
  }
  return;
}


