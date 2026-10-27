// Function : getAlertWindowTitleFont
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020ee70
// Prototype: Font * getAlertWindowTitleFont(Font * param_1, long * param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 0020ee70 - 0020ef52


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::getAlertWindowTitleFont() */

Font * __cdecl
juce::LookAndFeel_V2::getAlertWindowTitleFont
          (Font *param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  SharedFontInternal *pSVar1;
  uint uVar2;
  undefined8 extraout_RDX;
  float fVar3;
  undefined8 uVar4;
  SharedFontInternal *local_28;
  SharedFontInternal *local_20;
  float local_14;
  
  (**(code **)(*param_2 + 0x108))(&local_20);
  if (*(float *)(local_20 + 100) <= 0.0) {
    local_14 = *(float *)(local_20 + 0x68);
                    /* try { // try from 0020eeb3 to 0020eebc has its CatchHandler @ 0020ef53 */
    uVar4 = Font::SharedFontInternal::getAscentDescent
                      (local_20,(long *)&local_20,extraout_RDX,param_4,param_5,param_6);
    fVar3 = local_14 * ((float)((ulong)uVar4 >> 0x20) + (float)uVar4) * DAT_005de3ec;
    if (local_20 == (SharedFontInternal *)0x0) goto LAB_0020eeed;
  }
  else {
    fVar3 = *(float *)(local_20 + 100) * DAT_005de3ec;
  }
  LOCK();
  *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
  UNLOCK();
LAB_0020eeed:
                    /* try { // try from 0020eeed to 0020eef4 has its CatchHandler @ 0020ef75 */
  local_28 = local_20;
  Font::setHeight(fVar3,(Font *)&local_28);
  uVar2 = Font::getStyleFlags((Font *)&local_28);
  *(SharedFontInternal **)param_1 = local_28;
  if (local_28 != (SharedFontInternal *)0x0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
                    /* try { // try from 0020ef11 to 0020ef1a has its CatchHandler @ 0020ef5b */
  Font::setStyleFlags(param_1,uVar2 | 1);
  if (local_28 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar1 = local_28 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_28 + 8))();
    }
  }
  if (local_20 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar1 = local_20 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_20 + 8))();
    }
  }
  return param_1;
}


