// Function : drawProgressBar
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020f590
// Prototype: undefined drawProgressBar(double param_1, undefined8 param_2_00, undefined8 param_3, undefined8 param_4_00, undefined8 param_5_00, Graphics * param_6, Component * param_7, int param_8, int param_9, ulong * param_10)
// Body     : 0020f590 - 0020fa03


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V2::drawProgressBar(juce::Graphics&, juce::ProgressBar&, int, int, double,
   juce::String const&) */

void __cdecl
juce::LookAndFeel_V2::drawProgressBar
          (double param_1,undefined8 param_2_00,undefined8 param_3,undefined8 param_4_00,
          undefined8 param_5_00,Graphics *param_6,Component *param_7,int param_8,int param_9,
          ulong *param_10)

{
  long *plVar1;
  undefined1 auVar2 [16];
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  float fVar12;
  uint uVar13;
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  uint local_d8 [2];
  long *local_d0;
  undefined1 local_c8 [16];
  ulong local_b8;
  float local_b0;
  float local_ac;
  timespec local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  double local_78;
  float local_68;
  uint uStack_64;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float local_48;
  uint uStack_44;
  
  uVar13 = (uint)((ulong)param_4_00 >> 0x20);
  local_78 = param_1;
  uVar6 = Component::findColour(param_7,0x1001900,'\0');
  uVar7 = Component::findColour(param_7,0x1001a00,'\0');
  local_d8[0] = (uint)uVar7;
  Graphics::fillAll(param_6,(uint)uVar6);
  if ((local_78 < 0.0) || (_DAT_005d9000 <= local_78)) {
    Graphics::setColour(param_6,(uint)uVar7);
    iVar3 = param_9 * 2;
    clock_gettime(1,&local_a8);
    auVar2 = SEXT816(local_a8.tv_nsec / 1000 + local_a8.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar9 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar9) ||
       (uVar9 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar9;
    }
    local_98 = 0;
    uStack_90 = 0;
    fVar12 = (float)-(int)((long)((ulong)uVar9 / 0xf) % (long)iVar3);
    local_a8.tv_sec = 0;
    local_a8.tv_nsec = 0;
    local_88 = 1;
    if (fVar12 < (float)(param_8 + iVar3)) {
      local_48 = (float)iVar3;
      local_b0 = (float)param_9;
      uStack_54 = _UNK_006524b4 ^ uVar13;
      uStack_50 = _UNK_006524b8 ^ in_XMM3_Dc;
      uStack_4c = _UNK_006524bc ^ in_XMM3_Dd;
      local_68 = local_48 * DAT_005d9044;
      local_58 = (float)(_DAT_006524b0 ^ (uint)local_48) * DAT_005d9044;
      local_ac = (float)(param_8 + iVar3);
      uStack_64 = uVar13;
      uStack_44 = uVar13;
      do {
        local_78 = (double)CONCAT44(local_78._4_4_,fVar12);
        Path::addQuadrilateral
                  (fVar12,local_68 + fVar12,fVar12,local_b0,local_58 + fVar12,local_b0,
                   (Path *)&local_a8);
        fVar12 = local_78._0_4_ + local_48;
      } while (fVar12 < local_ac);
    }
                    /* try { // try from 0020f843 to 0020f84d has its CatchHandler @ 0020fa15 */
    (**(code **)(**(long **)(param_6 + 8) + 0x110))(local_c8);
                    /* try { // try from 0020f856 to 0020f86e has its CatchHandler @ 0020fa06 */
    (**(code **)(*(long *)local_c8._0_8_ + 0x10))(&local_d0,local_c8._0_8_,2,param_8,param_9,1);
    if ((long *)local_c8._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)local_c8._0_8_ + 8))();
    }
    if (local_d0 == (long *)0x0) {
      local_c8._0_8_ = 0;
    }
    else {
                    /* try { // try from 0020f88c to 0020f893 has its CatchHandler @ 0020fa04 */
      (**(code **)(*local_d0 + 0x10))(local_c8);
    }
    local_c8._8_8_ = local_c8._0_8_;
    local_b8 = local_b8 & 0xffffffffffffff00;
    puVar10 = (uint *)0x1;
    puVar11 = (undefined8 *)0x1;
    drawGlassLozenge((ulong)DAT_005d9038,(ulong)DAT_005d9038,(ulong)(uint)(float)(param_9 + -2),
                     DAT_005d9044,0.0,local_c8,local_d8,1,1,1,1);
    if ((long *)local_c8._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)local_c8._0_8_ + 8))();
    }
                    /* try { // try from 0020f910 to 0020f9c9 has its CatchHandler @ 0020fa1a */
    Graphics::setTiledImageFill((long)param_6,(long *)&local_d0);
    cVar4 = (**(code **)(**(long **)(param_6 + 8) + 0x68))();
    if (cVar4 == '\0') {
      if ((long)local_a8.tv_nsec._4_4_ != 0) {
        pfVar8 = (float *)local_a8.tv_sec;
        do {
          fVar12 = *pfVar8;
          if ((fVar12 != DAT_005de3d0) || (NAN(fVar12) || NAN(DAT_005de3d0))) {
            if ((fVar12 != DAT_005de3d4) || (NAN(fVar12) || NAN(DAT_005de3d4))) {
              if (((fVar12 != DAT_005de3d8) || (NAN(fVar12) || NAN(DAT_005de3d8))) &&
                 ((fVar12 != DAT_005de3dc || (NAN(fVar12) || NAN(DAT_005de3dc)))))
              goto LAB_0020f974;
            }
            local_c8 = ZEXT416(DAT_005d9038);
            local_b8 = 0x3f800000;
            (**(code **)(**(long **)(param_6 + 8) + 200))
                      (*(long **)(param_6 + 8),&local_a8,local_c8);
            break;
          }
          pfVar8 = pfVar8 + 2;
LAB_0020f974:
          pfVar8 = pfVar8 + 1;
        } while (pfVar8 != (float *)(local_a8.tv_sec + (long)local_a8.tv_nsec._4_4_ * 4));
      }
    }
    if (local_d0 != (long *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_d0 + 8))();
      }
    }
    local_a8.tv_nsec = local_a8.tv_nsec & 0xffffffff;
    free((void *)local_a8.tv_sec);
    cVar4 = *(char *)*param_10;
  }
  else {
    puVar10 = (uint *)0x1;
    puVar11 = (undefined8 *)0x1;
    drawGlassLozenge((ulong)DAT_005d9038,(ulong)DAT_005d9038,CONCAT44(uVar13,(float)(param_9 + -2)),
                     DAT_005d9044,0.0,param_6,local_d8,1,1,1,1);
    cVar4 = *(char *)*param_10;
  }
  if (cVar4 != '\0') {
    uVar5 = Colour::contrasting((uint)uVar6,local_d8[0]);
    Graphics::setColour(param_6,uVar5);
    Graphics::setFont((float)param_9 * DAT_005d98e8,param_6);
    Graphics::drawText(0,CONCAT44((float)param_9,(float)param_8),(long)param_6,param_10,0x24,0,
                       puVar10,puVar11);
  }
  return;
}


