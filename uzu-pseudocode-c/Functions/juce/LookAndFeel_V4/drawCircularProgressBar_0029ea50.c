// Function : drawCircularProgressBar
// Namespace: juce:LookAndFeel_V4
// Entry    : 0029ea50
// Prototype: undefined drawCircularProgressBar(Graphics * param_1, Component * param_2, ulong * param_3, undefined8 param_4, uint * param_5, undefined8 * param_6)
// Body     : 0029ea50 - 0029f22f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V4::drawCircularProgressBar(juce::Graphics&, juce::ProgressBar const&,
   juce::String const&) */

void __cdecl
juce::LookAndFeel_V4::drawCircularProgressBar
          (Graphics *param_1,Component *param_2,ulong *param_3,undefined8 param_4,uint *param_5,
          undefined8 *param_6)

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 __ptr;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  long *plVar8;
  int *piVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  uint uVar13;
  float local_1d8;
  float local_1d0;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  timespec local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_110;
  undefined4 local_108;
  long local_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  void *local_d0;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  uVar5 = Component::findColour(param_2,0x1001900,'\0');
  uVar6 = Component::findColour(param_2,0x1001a00,'\0');
  uVar11 = -(uint)((int)_DAT_00651fd0 < (int)*(uint *)(param_2 + 0x40));
  uVar13 = -(uint)((int)_UNK_00651fd4 < (int)*(uint *)(param_2 + 0x44));
  local_128 = (float)(int)((~uVar11 & _DAT_00651fd0 | *(uint *)(param_2 + 0x40) & uVar11) +
                          _DAT_005dd1e0);
  local_198 = (float)(int)((~uVar13 & _UNK_00651fd4 | *(uint *)(param_2 + 0x44) & uVar13) +
                          _UNK_005dd1e4);
  fStack_120 = (float)(int)((~-(uint)((int)_UNK_00651fd8 < 0) & _UNK_00651fd8) + _UNK_005dd1e8);
  fStack_11c = (float)(int)((~-(uint)((int)_UNK_00651fdc < 0) & _UNK_00651fdc) + _UNK_005dd1ec);
  fStack_194 = local_198;
  fStack_190 = local_198;
  fStack_18c = local_198;
  fStack_124 = local_198;
  clock_gettime(1,&local_158);
  auVar3 = SEXT816(local_158.tv_nsec / 1000 + local_158.tv_sec * 1000000) *
           SEXT816(0x20c49ba5e353f7cf);
  uVar11 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar11) ||
     (uVar11 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar11;
  }
  local_1d0 = (float)(int)(uVar11 / 10 + (uVar11 / 0xe10) * -0x168);
  local_1a8 = local_198;
  if (local_128 <= local_198) {
    local_1a8 = local_128;
  }
  fVar12 = local_1d0 / _DAT_005de4f0;
  local_1d8 = DAT_005de4f4 + local_1d0;
  fStack_1a4 = fStack_194;
  fStack_1a0 = fStack_190;
  fStack_19c = fStack_18c;
  if ((fVar12 < DAT_0065b200) || (DAT_005d9044 <= fVar12)) {
    if ((DAT_005d9044 <= fVar12) && (fVar12 <= DAT_005d9038)) {
      local_1d8 = local_1d8 + _DAT_005de4f8;
      local_1d0 = (DAT_005d9038 - (fVar12 + fVar12 + DAT_005d9054)) * _DAT_005de500 +
                  DAT_005de4fc + local_1d8;
    }
  }
  else {
    local_1d8 = local_1d8 + (DAT_005d94d4 * fVar12 + DAT_005d9054) * _DAT_005de4f8;
  }
  Graphics::setColour(param_1,(int)uVar5);
  local_148 = 0;
  uStack_140 = 0;
  local_158.tv_sec = 0;
  local_158.tv_nsec = 0;
  local_138 = 1;
  fVar10 = local_128 * DAT_005d9044 + DAT_005d9078;
  local_198 = local_198 * DAT_005d9044 + DAT_005d9078;
  local_1a8 = local_1a8 * DAT_005d9044;
  Path::addCentredArc(fVar10,local_198,local_1a8,local_1a8,0.0,0.0,DAT_005de448,(Path *)&local_158,
                      '\x01');
  _local_1c8 = ZEXT812(0x40800000);
  local_188 = ZEXT416((uint)DAT_005d9038);
  local_178 = 0x3f800000;
                    /* try { // try from 0029ecff to 0029ed9b has its CatchHandler @ 0029f279 */
  cVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if (cVar4 == '\0') {
    if ((long)local_158.tv_nsec._4_4_ != 0) {
      pfVar7 = (float *)local_158.tv_sec;
      do {
        fVar1 = *pfVar7;
        if ((fVar1 != DAT_005de3d0) || (NAN(fVar1) || NAN(DAT_005de3d0))) {
          if ((fVar1 != DAT_005de3d4) || (NAN(fVar1) || NAN(DAT_005de3d4))) {
            if (((fVar1 != DAT_005de3d8) || (NAN(fVar1) || NAN(DAT_005de3d8))) &&
               ((fVar1 != DAT_005de3dc || (NAN(fVar1) || NAN(DAT_005de3dc))))) goto LAB_0029ed54;
          }
          (**(code **)(**(long **)(param_1 + 8) + 0xd8))
                    (*(long **)(param_1 + 8),&local_158,local_1c8);
          break;
        }
        pfVar7 = pfVar7 + 2;
LAB_0029ed54:
        pfVar7 = pfVar7 + 1;
      } while (pfVar7 != (float *)(local_158.tv_sec + (long)local_158.tv_nsec._4_4_ * 4));
    }
  }
                    /* try { // try from 0029ed9c to 0029eda6 has its CatchHandler @ 0029f272 */
  Graphics::setColour(param_1,(int)uVar6);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = ZEXT816(0);
  local_168 = 1;
  Path::addCentredArc(fVar10,local_198,local_1a8,local_1a8,0.0,local_1d0 * DAT_005de504,
                      local_1d8 * DAT_005de504,(Path *)local_188,'\x01');
  fVar12 = fVar12 * DAT_00652ba0 * _DAT_005de508;
  local_1a8 = cosf(fVar12);
  fStack_1bc = sinf(fVar12);
  local_1c8._4_4_ = _DAT_006524b0 ^ (uint)fStack_1bc;
  local_1c8._0_4_ = local_1a8;
  fStack_1c0 = (fStack_1bc * local_198 - local_1a8 * fVar10) + fVar10;
  local_1b8 = CONCAT44(((float)(_DAT_006524b0 ^ (uint)fStack_1bc) * fVar10 - local_198 * local_1a8)
                       + local_198,local_1a8);
  Path::applyTransform((Path *)local_188,(float *)local_1c8);
  local_110 = 0x40800000;
  local_108 = 0;
  _local_1c8 = ZEXT416((uint)DAT_005d9038);
  local_1b8 = 0x3f800000;
                    /* try { // try from 0029eed7 to 0029ef6b has its CatchHandler @ 0029f277 */
  cVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if (cVar4 == '\0') {
    if ((long)(int)local_188._12_4_ != 0) {
      pfVar7 = (float *)local_188._0_8_;
      do {
        fVar12 = *pfVar7;
        if ((fVar12 != DAT_005de3d0) || (NAN(fVar12) || NAN(DAT_005de3d0))) {
          if ((fVar12 != DAT_005de3d4) || (NAN(fVar12) || NAN(DAT_005de3d4))) {
            if (((fVar12 != DAT_005de3d8) || (NAN(fVar12) || NAN(DAT_005de3d8))) &&
               ((fVar12 != DAT_005de3dc || (NAN(fVar12) || NAN(DAT_005de3dc))))) goto LAB_0029ef24;
          }
          (**(code **)(**(long **)(param_1 + 8) + 0xd8))
                    (*(long **)(param_1 + 8),local_188,&local_110);
          break;
        }
        pfVar7 = pfVar7 + 2;
LAB_0029ef24:
        pfVar7 = pfVar7 + 1;
      } while (pfVar7 != (float *)(local_188._0_8_ + (long)(int)local_188._12_4_ * 4));
    }
  }
  if (*(char *)*param_3 != '\0') {
                    /* try { // try from 0029ef78 to 0029ef90 has its CatchHandler @ 0029f27e */
    uVar5 = Component::findColour(param_2,0x1000102,'\0');
    Graphics::setColour(param_1,(int)uVar5);
                    /* try { // try from 0029ef91 to 0029efaa has its CatchHandler @ 0029f23a */
    FontOptions::FontOptions(DAT_005d9074,(FontOptions *)&local_100,2);
                    /* try { // try from 0029efab to 0029efc2 has its CatchHandler @ 0029f235 */
    Component::withDefaultMetrics(&local_98,(long)param_2,&local_100);
                    /* try { // try from 0029efc3 to 0029efd4 has its CatchHandler @ 0029f230 */
    Font::Font((Font *)local_1c8,&local_98);
    if (param_1[0x10] != (Graphics)0x0) {
      param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 0029efe8 to 0029effc has its CatchHandler @ 0029f23c */
      (**(code **)(**(long **)(param_1 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),local_1c8);
    if (local_1c8 != (undefined1  [8])0x0) {
      LOCK();
      plVar8 = (long *)((long)local_1c8 + 8);
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)(*(long *)local_1c8 + 8))();
      }
    }
    if (local_68 != (void *)0x0) {
      operator_delete(local_68);
    }
    plVar8 = local_80;
    if (local_80 != local_78) {
      do {
        piVar9 = (int *)(*plVar8 + -0x10);
        if (piVar9 != &emptyString) {
          LOCK();
          iVar2 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar9);
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != local_78);
    }
    if (local_80 != (long *)0x0) {
      operator_delete(local_80);
    }
    if (local_88 != (long *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)(*local_88 + 8))();
      }
    }
    piVar9 = (int *)(local_90 + -0x10);
    if (piVar9 != &emptyString) {
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar9);
      }
    }
    piVar9 = (int *)(local_98 + -0x10);
    if (piVar9 != &emptyString) {
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar9);
      }
    }
    plVar8 = local_e8;
    if (local_d0 != (void *)0x0) {
      operator_delete(local_d0);
      plVar8 = local_e8;
    }
    for (; plVar8 != local_e0; plVar8 = plVar8 + 1) {
      piVar9 = (int *)(*plVar8 + -0x10);
      if (piVar9 != &emptyString) {
        LOCK();
        iVar2 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar9);
        }
      }
    }
    if (local_e8 != (long *)0x0) {
      operator_delete(local_e8);
    }
    if (local_f0 != (long *)0x0) {
      LOCK();
      plVar8 = local_f0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)(*local_f0 + 8))();
      }
    }
    piVar9 = (int *)(local_f8 + -0x10);
    if (piVar9 != &emptyString) {
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar9);
      }
    }
    piVar9 = (int *)(local_100 + -0x10);
    if (piVar9 != &emptyString) {
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar9);
      }
    }
                    /* try { // try from 0029f18e to 0029f1ae has its CatchHandler @ 0029f27e */
    Graphics::drawText(_DAT_005dd070,CONCAT44(fStack_124,local_128),(long)param_1,param_3,0x24,0,
                       param_5,param_6);
  }
  local_188._12_4_ = 0;
  auVar3 = local_188;
  __ptr = local_188._0_8_;
  local_188 = auVar3;
  free((void *)__ptr);
  local_158.tv_nsec = local_158.tv_nsec & 0xffffffff;
  free((void *)local_158.tv_sec);
  return;
}


