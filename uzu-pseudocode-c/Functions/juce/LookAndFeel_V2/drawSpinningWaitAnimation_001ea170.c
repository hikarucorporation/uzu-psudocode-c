// Function : drawSpinningWaitAnimation
// Namespace: juce:LookAndFeel_V2
// Entry    : 001ea170
// Prototype: undefined drawSpinningWaitAnimation(undefined8 param_1_00, Graphics * param_2, uint * param_3, int param_4, int param_5, int param_6, int param_7)
// Body     : 001ea170 - 001ea4ce


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawSpinningWaitAnimation(juce::Graphics&, juce::Colour const&, int, int,
   int, int) */

void __thiscall
juce::LookAndFeel_V2::drawSpinningWaitAnimation
          (undefined8 param_1_00,Graphics *param_2,uint *param_3,int param_4,int param_5,int param_6
          ,int param_7)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_70 [12];
  float fStack_64;
  float local_60;
  float local_5c;
  float *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  iVar3 = param_6;
  if (param_7 < param_6) {
    iVar3 = param_7;
  }
  fVar9 = (float)iVar3 * DAT_005d98f0;
  fVar10 = DAT_005d9050 * fVar9;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (float *)0x0;
  uStack_50 = 0;
  local_38 = 1;
  Path::addRoundedRectangle
            (DAT_005d98f0 * fVar9,DAT_005d98c8 * fVar10,fVar9 * DAT_005d98e8,fVar10,
             fVar10 * DAT_005d9044,fVar10 * DAT_005d9044,(Path *)&local_58,1,'\x01','\x01','\x01');
  fVar9 = (float)param_6 * DAT_005d9044;
  fVar10 = (float)param_7 * DAT_005d9044;
  clock_gettime(1,(timespec *)local_70);
  auVar1 = SEXT816(CONCAT44(fStack_64,local_70._8_4_) / 1000 +
                   CONCAT44(local_70._4_4_,local_70._0_4_) * 1000000) * SEXT816(0x20c49ba5e353f7cf);
  uVar5 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar5) ||
     (uVar5 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar5;
  }
  uVar6 = 0;
  do {
    iVar3 = SUB84((double)((float)(*param_3 >> 0x18) *
                          ((float)((uVar6 + ((int)(((ulong)uVar5 / 100) / 0xc) * 0xc -
                                            (int)((ulong)uVar5 / 100)) + 0xc) % 0xc + 1) /
                          DAT_005d9074)) + DAT_005d9098,0);
    if (0xfe < iVar3) {
      iVar3 = 0xff;
    }
                    /* try { // try from 001ea3a2 to 001ea3a9 has its CatchHandler @ 001ea4d1 */
    Graphics::setColour(param_2,*param_3 & 0xffffff | iVar3 << 0x18);
    fVar7 = (float)uVar6 * _DAT_005de3e4;
    fVar8 = cosf(fVar7);
    fStack_64 = sinf(fVar7);
    local_70._4_4_ = (uint)fStack_64 ^ _DAT_006524b0;
                    /* try { // try from 001ea420 to 001ea422 has its CatchHandler @ 001ea4cf */
    local_70._0_4_ = fVar8;
    local_70._8_4_ = fVar9 + (float)param_4 + 0.0;
    local_60 = fVar8;
    local_5c = fVar10 + (float)param_5 + 0.0;
    cVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    if (cVar2 == '\0') {
      if ((long)uStack_50._4_4_ != 0) {
        pfVar4 = local_58;
        do {
          fVar7 = *pfVar4;
          if ((fVar7 != DAT_005de3d0) || (NAN(fVar7) || NAN(DAT_005de3d0))) {
            if ((fVar7 != DAT_005de3d4) || (NAN(fVar7) || NAN(DAT_005de3d4))) {
              if (((fVar7 != DAT_005de3d8) || (NAN(fVar7) || NAN(DAT_005de3d8))) &&
                 ((fVar7 != DAT_005de3dc || (NAN(fVar7) || NAN(DAT_005de3dc))))) goto LAB_001ea474;
            }
                    /* try { // try from 001ea31f to 001ea32e has its CatchHandler @ 001ea4cf */
            (**(code **)(**(long **)(param_2 + 8) + 200))
                      (*(long **)(param_2 + 8),&local_58,local_70);
            break;
          }
          pfVar4 = pfVar4 + 2;
LAB_001ea474:
          pfVar4 = pfVar4 + 1;
        } while (pfVar4 != local_58 + uStack_50._4_4_);
      }
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == 0xc) {
      uStack_50 = uStack_50 & 0xffffffff;
      free(local_58);
      return;
    }
  } while( true );
}


