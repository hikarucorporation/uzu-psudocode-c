// Function : drawLinearSlider
// Namespace: juce:LookAndFeel_V2
// Entry    : 002125e0
// Prototype: undefined drawLinearSlider(float param_1, undefined4 param_2, undefined4 param_3, LookAndFeel_V2 * this, Graphics * param_5, int param_6, int param_7, int param_8, int param_9, uint param_10, Component * param_11)
// Body     : 002125e0 - 0021296d


/* WARNING: Removing unreachable block (ram,0x002128e7) */
/* juce::LookAndFeel_V2::drawLinearSlider(juce::Graphics&, int, int, int, int, float, float, float,
   juce::Slider::SliderStyle, juce::Slider&) */

void __thiscall
juce::LookAndFeel_V2::drawLinearSlider
          (float param_1,undefined4 param_2,undefined4 param_3,LookAndFeel_V2 *this,
          Graphics *param_5,int param_6,int param_7,int param_8,int param_9,uint param_10,
          Component *param_11)

{
  long lVar1;
  long lVar2;
  Graphics *pGVar3;
  uint uVar4;
  ulong uVar5;
  Desktop *pDVar6;
  long lVar7;
  Component *pCVar8;
  long lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint local_48 [2];
  uint local_40 [2];
  Graphics *local_38;
  
  uVar5 = Component::findColour(param_11,0x1001200,'\0');
  Graphics::fillAll(param_5,(uint)uVar5);
  if ((param_10 & 0xfffffffe) != 2) {
    (**(code **)(*(long *)this + 0x2c0))
              (param_1,param_2,param_3,this,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
                    /* WARNING: Could not recover jumptable at 0x0021278e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x2d0))
              (param_1,param_2,param_3,this,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  local_38 = param_5;
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 00212678 to 0021267f has its CatchHandler @ 00212970 */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  lVar7 = (long)*(int *)(*(long *)(Desktop::instance + 0x40) + 0x44);
  if (lVar7 != 0) {
    lVar9 = 0;
    do {
      lVar1 = *(long *)(*(long *)(*(long *)(Desktop::instance + 0x40) + 0x38) + lVar9);
      if (((*(long *)(lVar1 + 0x48) != 0) &&
          (*(Component **)(*(long *)(lVar1 + 0x48) + 0x10) == param_11)) &&
         (((*(ushort *)(lVar1 + 0x3c) & 0x1f0) != 0 || (*(int *)(lVar1 + 0x14) != 1)))) {
        pCVar8 = param_11;
        goto LAB_002126f0;
      }
      lVar9 = lVar9 + 8;
    } while (lVar7 * 8 != lVar9);
  }
  bVar10 = false;
  goto LAB_002127a0;
  while (pCVar8 = *(Component **)(pCVar8 + 0x30), pCVar8 != (Component *)0x0) {
LAB_002126f0:
    bVar10 = (*(ushort *)(pCVar8 + 0xe8) & 0x8000) == 0;
    if (!bVar10) break;
  }
LAB_002127a0:
  uVar5 = Component::findColour(param_11,0x1001300,'\0');
  pCVar8 = param_11;
  do {
    fVar11 = DAT_005d9044;
    if ((*(ushort *)(pCVar8 + 0xe8) & 0x8000) != 0) goto LAB_002127eb;
    pCVar8 = *(Component **)(pCVar8 + 0x30);
  } while (pCVar8 != (Component *)0x0);
  fVar11 = DAT_005d9038;
LAB_002127eb:
  uVar4 = Colour::withMultipliedSaturation(fVar11,(uint)uVar5);
  if (bVar10) {
LAB_002127f8:
    local_48[0] = Colour::withMultipliedSaturation(DAT_005de3c8,uVar4);
    local_40[0] = Colour::contrasting(DAT_005d9070,(Colour *)local_48);
  }
  else {
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar6 = operator_new(0x1d0);
                    /* try { // try from 0021283e to 00212845 has its CatchHandler @ 0021296e */
      Desktop::Desktop(pDVar6);
      Desktop::instance = pDVar6;
    }
    lVar7 = (long)*(int *)(*(long *)(Desktop::instance + 0x40) + 0x44);
    if (lVar7 != 0) {
      lVar9 = 0;
      do {
        lVar1 = *(long *)(*(long *)(*(long *)(Desktop::instance + 0x40) + 0x38) + lVar9);
        lVar2 = *(long *)(lVar1 + 0x48);
        if (((lVar2 != 0) && (*(Component **)(lVar2 + 0x10) == param_11)) &&
           ((*(ushort *)(lVar1 + 0x3c) & 0x1f0) != 0)) goto LAB_002127f8;
        lVar9 = lVar9 + 8;
      } while (lVar7 * 8 != lVar9);
    }
    local_40[0] = Colour::withMultipliedSaturation(DAT_005de3c8,uVar4);
    local_48[0] = local_40[0];
  }
  pGVar3 = local_38;
  fVar11 = param_1;
  if (param_10 != 3) {
    fVar11 = (float)param_7;
  }
  if (param_10 == 3) {
    fVar12 = (float)param_8;
  }
  else {
    fVar12 = param_1 - (float)param_6;
    param_1 = 0.0;
  }
  pCVar8 = param_11;
  do {
    fVar13 = DAT_005d9088;
    if ((*(ushort *)(pCVar8 + 0xe8) & 0x8000) != 0) goto LAB_0021292b;
    pCVar8 = *(Component **)(pCVar8 + 0x30);
  } while (pCVar8 != (Component *)0x0);
  fVar13 = DAT_005de3c8;
LAB_0021292b:
  drawShinyButtonShape
            ((float)param_6,fVar11,fVar12,(float)param_9 - param_1,fVar13,local_38,local_40);
  (**(code **)(*(long *)this + 0x2c8))
            (this,pGVar3,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}


