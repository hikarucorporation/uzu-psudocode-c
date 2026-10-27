// Function : drawLinearProgressBar
// Namespace: juce:LookAndFeel_V4
// Entry    : 0029e3f0
// Prototype: undefined drawLinearProgressBar(double param_1, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4_00, Graphics * param_5, Component * param_6, int param_7, uint param_8, ulong * param_9, undefined8 * param_10)
// Body     : 0029e3f0 - 0029e9c4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V4::drawLinearProgressBar(juce::Graphics&, juce::ProgressBar const&, int, int,
   double, juce::String const&) */

void __cdecl
juce::LookAndFeel_V4::drawLinearProgressBar
          (double param_1,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4_00,
          Graphics *param_5,Component *param_6,int param_7,uint param_8,ulong *param_9,
          undefined8 *param_10)

{
  long *plVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  __time_t __ptr;
  timespec tVar6;
  timespec tVar7;
  long lVar8;
  undefined8 __ptr_00;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  float *pfVar13;
  uint uVar14;
  uint *puVar15;
  float fVar16;
  uint uVar17;
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  timespec local_118;
  long *local_108;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  long *local_e0;
  uint local_d4;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  undefined1 local_78;
  ulong *local_70;
  float local_68;
  uint uStack_64;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float local_48;
  uint uStack_44;
  
  uVar17 = (uint)((ulong)param_4_00 >> 0x20);
  uVar12 = Component::findColour(param_6,0x1001900,'\0');
  uVar14 = (uint)uVar12;
  uVar12 = Component::findColour(param_6,0x1001a00,'\0');
  uVar10 = (uint)uVar12;
  local_98 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20),
                      (float)(int)*(undefined8 *)(param_6 + 0x40));
  uStack_90 = 0;
  Graphics::setColour(param_5,uVar14);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_98;
  local_118 = (timespec)(auVar2 << 0x40);
  (**(code **)(**(long **)(param_5 + 8) + 0x120))
            ((float)*(int *)(param_6 + 0x44) * DAT_005d9044,*(long **)(param_5 + 8),&local_118);
  if ((param_1 < 0.0) || (_DAT_005d9000 < param_1)) {
    local_d4 = uVar14;
    local_70 = param_9;
    Graphics::setColour(param_5,uVar14);
    iVar3 = param_8 * 2;
    clock_gettime(1,&local_118);
    auVar2 = SEXT816(local_118.tv_nsec / 1000 + local_118.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar14 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar14) ||
       (uVar14 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar14;
    }
    local_b8 = 0;
    uStack_b0 = 0;
    fVar16 = (float)-(int)((long)((ulong)uVar14 / 0xf) % (long)iVar3);
    local_c8 = ZEXT816(0);
    local_a8 = 1;
    if (fVar16 < (float)(param_7 + iVar3)) {
      local_48 = (float)iVar3;
      local_d0 = (float)(int)param_8;
      uStack_54 = _UNK_006524b4 ^ uVar17;
      uStack_50 = _UNK_006524b8 ^ in_XMM3_Dc;
      uStack_4c = _UNK_006524bc ^ in_XMM3_Dd;
      local_68 = local_48 * DAT_005d9044;
      local_58 = (float)(_DAT_006524b0 ^ (uint)local_48) * DAT_005d9044;
      local_cc = (float)(param_7 + iVar3);
      uStack_64 = uVar17;
      uStack_44 = uVar17;
      do {
        Path::addQuadrilateral
                  (fVar16,local_68 + fVar16,fVar16,local_d0,local_58 + fVar16,local_d0,
                   (Path *)local_c8);
        fVar16 = fVar16 + local_48;
      } while (fVar16 < local_cc);
    }
                    /* try { // try from 0029e7a6 to 0029e7b0 has its CatchHandler @ 0029e9fd */
    (**(code **)(**(long **)(param_5 + 8) + 0x110))(&local_118);
                    /* try { // try from 0029e7b9 to 0029e7d4 has its CatchHandler @ 0029e9ee */
    puVar15 = (uint *)(ulong)param_8;
    param_10 = (undefined8 *)0x1;
    (**(code **)(*(long *)local_118.tv_sec + 0x10))(&local_e0,local_118.tv_sec,2);
    uVar14 = local_d4;
    if ((long *)local_118.tv_sec != (long *)0x0) {
      (**(code **)(*(long *)local_118.tv_sec + 8))();
    }
                    /* try { // try from 0029e7f2 to 0029e7fc has its CatchHandler @ 0029e9ec */
    (**(code **)(*local_e0 + 0x10))(&local_88);
    local_80 = local_88;
    local_78 = 0;
    local_118.tv_sec._0_4_ = uVar10;
    local_118.tv_nsec = 0;
    local_108 = (long *)0x0;
    auStack_100 = ZEXT416(DAT_005d9038);
    local_f0 = 0x3f800000;
                    /* try { // try from 0029e83e to 0029e848 has its CatchHandler @ 0029e9ca */
    (**(code **)(*local_88 + 0x90))(local_88,&local_118);
    if (local_108 != (long *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_108 + 8))();
      }
    }
    lVar8 = local_118.tv_nsec;
    if ((void *)local_118.tv_nsec != (void *)0x0) {
      *(undefined4 *)(local_118.tv_nsec + 0x24) = 0;
      free(*(void **)(local_118.tv_nsec + 0x18));
      operator_delete((void *)lVar8);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_98;
    local_118 = (timespec)(auVar5 << 0x40);
                    /* try { // try from 0029e8b1 to 0029e8bb has its CatchHandler @ 0029e9c5 */
    (**(code **)(*local_80 + 0x120))
              ((float)*(int *)(param_6 + 0x44) * DAT_005d9044,local_80,&local_118);
    param_9 = local_70;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
                    /* try { // try from 0029e8d7 to 0029e989 has its CatchHandler @ 0029ea02 */
    Graphics::setTiledImageFill((long)param_5,(long *)&local_e0);
    cVar9 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
    if (cVar9 == '\0') {
      if ((long)(int)local_c8._12_4_ != 0) {
        pfVar13 = (float *)local_c8._0_8_;
        do {
          fVar16 = *pfVar13;
          if ((fVar16 != DAT_005de3d0) || (NAN(fVar16) || NAN(DAT_005de3d0))) {
            if ((fVar16 != DAT_005de3d4) || (NAN(fVar16) || NAN(DAT_005de3d4))) {
              if (((fVar16 != DAT_005de3d8) || (NAN(fVar16) || NAN(DAT_005de3d8))) &&
                 ((fVar16 != DAT_005de3dc || (NAN(fVar16) || NAN(DAT_005de3dc)))))
              goto LAB_0029e934;
            }
            local_118 = (timespec)ZEXT416(DAT_005d9038);
            local_108 = (long *)&DAT_3f800000;
            (**(code **)(**(long **)(param_5 + 8) + 200))
                      (*(long **)(param_5 + 8),local_c8,&local_118);
            break;
          }
          pfVar13 = pfVar13 + 2;
LAB_0029e934:
          pfVar13 = pfVar13 + 1;
        } while (pfVar13 != (float *)(local_c8._0_8_ + (long)(int)local_c8._12_4_ * 4));
      }
    }
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_e0 + 8))();
      }
    }
    local_c8._12_4_ = 0;
    auVar2 = local_c8;
    __ptr_00 = local_c8._0_8_;
    local_c8 = auVar2;
    free((void *)__ptr_00);
    cVar9 = *(char *)*param_9;
  }
  else {
    local_108 = (long *)0x0;
    local_118 = (timespec)ZEXT816(0);
    auStack_100._0_9_ = (unkuint9)1 << 0x40;
    puVar15 = (uint *)0x1;
    Path::addRoundedRectangle
              (0.0,0.0,(float)local_98,local_98._4_4_,(float)*(int *)(param_6 + 0x44) * DAT_005d9044
               ,(float)*(int *)(param_6 + 0x44) * DAT_005d9044,(Path *)&local_118,1,'\x01','\x01',
               '\x01');
    local_c8 = ZEXT416(DAT_005d9038);
    local_b8 = 0x3f800000;
    if (param_5[0x10] != (Graphics)0x0) {
      param_5[0x10] = (Graphics)0x0;
                    /* try { // try from 0029e533 to 0029e553 has its CatchHandler @ 0029ea2d */
      (**(code **)(**(long **)(param_5 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_5 + 8) + 0x48))(*(long **)(param_5 + 8),&local_118,local_c8);
    (**(code **)(**(long **)(param_5 + 8) + 0x68))();
                    /* try { // try from 0029e554 to 0029e5aa has its CatchHandler @ 0029ea2b */
    Graphics::setColour(param_5,uVar10);
    auVar4._4_4_ = local_98._4_4_;
    auVar4._0_4_ = (float)param_1 * (float)local_98;
    auVar4._8_8_ = 0;
    local_c8 = auVar4 << 0x40;
    (**(code **)(**(long **)(param_5 + 8) + 0x120))
              ((float)*(int *)(param_6 + 0x44) * DAT_005d9044,*(long **)(param_5 + 8),local_c8);
    tVar6 = local_118;
    local_118.tv_nsec._4_4_ = 0;
    tVar7 = local_118;
    local_118.tv_sec = tVar6.tv_sec;
    __ptr = local_118.tv_sec;
    local_118 = tVar7;
    free((void *)__ptr);
    cVar9 = *(char *)*param_9;
  }
  if (cVar9 != '\0') {
    uVar11 = Colour::contrasting(uVar14,uVar10);
    Graphics::setColour(param_5,uVar11);
    Graphics::setFont((float)(int)param_8 * DAT_005d98e8,param_5);
    Graphics::drawText(0,CONCAT44((float)(int)param_8,(float)param_7),(long)param_5,param_9,0x24,0,
                       puVar15,param_10);
  }
  return;
}


