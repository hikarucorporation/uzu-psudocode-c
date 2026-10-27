// Function : drawLabel
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f31a0
// Prototype: undefined drawLabel(LookAndFeel_V2 * this, Graphics * param_1, Component * param_2, undefined8 param_3, undefined8 param_4, ulong param_5)
// Body     : 001f31a0 - 001f34c6


/* juce::LookAndFeel_V2::drawLabel(juce::Graphics&, juce::Label&) */

void __thiscall
juce::LookAndFeel_V2::drawLabel
          (LookAndFeel_V2 *this,Graphics *param_1,Component *param_2,undefined8 param_3,
          undefined8 param_4,ulong param_5)

{
  SharedFontInternal *pSVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  Component *pCVar5;
  double dVar6;
  int iVar7;
  undefined8 extraout_RDX;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_5c;
  SharedFontInternal *local_58;
  long local_50;
  undefined8 uStack_48;
  long local_40;
  float local_38;
  uint local_34;
  
  uVar4 = Component::findColour(param_2,0x1000280,'\0');
  Graphics::fillAll(param_1,(uint)uVar4);
  if (*(long *)(param_2 + 0x1c0) == 0) {
    local_5c = DAT_005d9044;
    pCVar5 = param_2;
    do {
      if ((*(ushort *)(pCVar5 + 0xe8) & 0x8000) != 0) goto LAB_001f325e;
      pCVar5 = *(Component **)(pCVar5 + 0x30);
    } while (pCVar5 != (Component *)0x0);
    local_5c = DAT_005d9038;
LAB_001f325e:
    (**(code **)(*(long *)this + 0x2a8))(&local_58,this,param_2);
                    /* try { // try from 001f3272 to 001f32c5 has its CatchHandler @ 001f3525 */
    uVar4 = Component::findColour(param_2,0x1000281,'\0');
    dVar6 = (double)((float)((uint)(uVar4 >> 0x18) & 0xff) * local_5c) + DAT_005d9098;
    iVar7 = 0xff;
    if (SUB84(dVar6,0) < 0xff) {
      iVar7 = SUB84(dVar6,0);
    }
    Graphics::setColour(param_1,(uint)uVar4 & 0xffffff | iVar7 << 0x18);
    if (param_1[0x10] != (Graphics)0x0) {
      param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 001f32d9 to 001f32ed has its CatchHandler @ 001f3521 */
      (**(code **)(**(long **)(param_1 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_58);
                    /* try { // try from 001f32f1 to 001f32fc has its CatchHandler @ 001f351f */
    auVar12 = (**(code **)(*(long *)this + 0x2b0))(this,param_2);
    iVar7 = *(int *)(param_2 + 0x40);
    iVar8 = *(int *)(param_2 + 0x44);
                    /* try { // try from 001f3315 to 001f331c has its CatchHandler @ 001f351d */
    (**(code **)(**(long **)(param_2 + 0x178) + 0x10))(&local_50);
                    /* try { // try from 001f3327 to 001f332e has its CatchHandler @ 001f3503 */
    (**(code **)(local_50 + 0x28))(&local_40,&uStack_48);
                    /* try { // try from 001f3334 to 001f333b has its CatchHandler @ 001f34fb */
    (**(code **)(local_50 + 0x58))(&uStack_48);
    puVar10 = (uint *)(ulong)*(uint *)(param_2 + 0x1b8);
    fVar11 = *(float *)(local_58 + 100);
    if (fVar11 <= 0.0) {
      local_38 = *(float *)(local_58 + 0x68);
                    /* try { // try from 001f3366 to 001f336f has its CatchHandler @ 001f34c7 */
      local_34 = *(uint *)(param_2 + 0x1b8);
      uVar2 = Font::SharedFontInternal::getAscentDescent
                        (local_58,(long *)&local_58,extraout_RDX,dVar6,puVar10,param_5);
      fVar11 = local_38 * ((float)((ulong)uVar2 >> 0x20) + (float)uVar2);
      puVar10 = (uint *)(ulong)local_34;
    }
    iVar8 = (iVar8 - auVar12._8_4_) - auVar12._0_4_;
    uVar3 = (uint)((float)iVar8 / fVar11);
    uVar4 = 1;
    if (0 < (int)uVar3) {
      uVar4 = (ulong)uVar3;
    }
                    /* try { // try from 001f33d7 to 001f33f0 has its CatchHandler @ 001f34cf */
    Graphics::drawFittedText
              (*(undefined4 *)(param_2 + 0x208),DAT_005d9960,(long)param_1,&local_40,
               auVar12._0_8_ << 0x20 | auVar12._0_8_ >> 0x20,
               CONCAT44(iVar8,iVar7 - (auVar12._12_4_ + auVar12._4_4_)),puVar10,uVar4);
    piVar9 = (int *)(local_40 + -0x10);
    if (piVar9 != &emptyString) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        operator_delete__(piVar9);
      }
    }
                    /* try { // try from 001f3418 to 001f3472 has its CatchHandler @ 001f3523 */
    uVar4 = Component::findColour(param_2,0x1000282,'\0');
    iVar8 = SUB84((double)(local_5c * (float)((uint)(uVar4 >> 0x18) & 0xff)) + DAT_005d9098,0);
    iVar7 = 0xff;
    if (iVar8 < 0xff) {
      iVar7 = iVar8;
    }
    Graphics::setColour(param_1,(uint)uVar4 & 0xffffff | iVar7 << 0x18);
    if (local_58 != (SharedFontInternal *)0x0) {
      LOCK();
      pSVar1 = local_58 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        (**(code **)(*(long *)local_58 + 8))();
      }
    }
  }
  else {
    pCVar5 = param_2;
    do {
      if ((*(ushort *)(pCVar5 + 0xe8) & 0x8000) != 0) goto LAB_001f348a;
      pCVar5 = *(Component **)(pCVar5 + 0x30);
    } while (pCVar5 != (Component *)0x0);
    uVar4 = Component::findColour(param_2,0x1000282,'\0');
    Graphics::setColour(param_1,(int)uVar4);
  }
LAB_001f348a:
  uStack_48 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20),
                       (float)(int)*(undefined8 *)(param_2 + 0x40));
  local_50 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_1 + 8),&local_50);
  return;
}


