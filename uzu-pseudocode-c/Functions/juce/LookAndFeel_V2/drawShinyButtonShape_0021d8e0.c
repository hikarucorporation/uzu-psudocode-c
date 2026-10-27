// Function : drawShinyButtonShape
// Namespace: juce:LookAndFeel_V2
// Entry    : 0021d8e0
// Prototype: undefined drawShinyButtonShape(float param_1, float param_2, float param_3, float param_4, float param_5, Graphics * param_6, uint * param_7)
// Body     : 0021d8e0 - 0021de40


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::drawShinyButtonShape(juce::Graphics&, float, float, float, float, float,
   juce::Colour const&, float, bool, bool, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::drawShinyButtonShape
          (float param_1,float param_2,float param_3,float param_4,float param_5,Graphics *param_6,
          uint *param_7)

{
  uint uVar1;
  Graphics *this;
  char cVar2;
  uint uVar3;
  uint uVar4;
  double *__ptr;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  double *pdVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  byte local_f4;
  byte local_f0;
  float *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  Graphics *local_98;
  float local_90 [4];
  undefined4 local_80;
  float fStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined1 local_70;
  double *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_48;
  
  if ((DAT_005de3ec * param_5 < param_3) && (DAT_005de3ec * param_5 < param_4)) {
    fVar12 = param_3 * DAT_005d9044;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (float *)0x0;
    uStack_e0 = 0;
    local_c8 = 1;
    if (0.0 <= fVar12) {
      fVar12 = 0.0;
    }
    fVar11 = DAT_005d9044 * param_4;
    if (fVar12 <= DAT_005d9044 * param_4) {
      fVar11 = fVar12;
    }
    local_58 = param_2;
    local_48 = param_4;
    Path::addRoundedRectangle
              (param_1,param_2,param_3,param_4,fVar11,fVar11,(Path *)&local_e8,0,'\0','\0','\0');
    uVar1 = *param_7;
    uVar10 = uVar1 >> 0x18;
    if (uVar1 < 0x1000000) {
      uVar6 = 7;
      uVar7 = 0;
      uVar4 = 0;
      uVar3 = 0x70000ff;
    }
    else {
      uVar6 = (uVar10 ^ 0xff) * 0xf8 >> 8 ^ 0xff;
      uVar3 = (uVar10 * 0xf8) / uVar6;
      uVar7 = ((uVar1 >> 0x10 & 0xff) * uVar3 >> 8) + 0x700;
      uVar4 = (uVar1 >> 8 & 0xff) * uVar3 & 0xffff00;
      uVar3 = (((uVar1 & 0xff) - 0xff) * uVar3 >> 8) + 0x70000ff;
    }
    fStack_74 = local_48 + local_58;
    local_80 = 0;
    fStack_7c = local_58;
    uStack_78 = 0;
    local_70 = 0;
    __ptr = malloc(0x80);
    local_60 = 8;
    *__ptr = 0.0;
    *(uint *)(__ptr + 1) = uVar1;
    local_5c = 2;
    __ptr[2] = 1.0;
    *(uint *)(__ptr + 3) = uVar3 & 0xff | uVar4 & 0xff00 | (uVar7 & 0xff) << 0x10 | uVar6 << 0x18;
    uVar4 = 0x33ffffff;
    local_f0 = (byte)(uVar1 >> 8);
    local_f4 = (byte)(uVar1 >> 0x10);
    if (0xffffff < uVar1) {
      uVar7 = (uVar10 ^ 0xff) * 0xcc >> 8 ^ 0xff;
      uVar4 = (uVar10 * 0xcc) / uVar7;
      uVar4 = (((uVar1 & 0xff) - 0xff) * uVar4 >> 8) - 1 & 0xff |
              (local_f0 - 0xff) * uVar4 + 0xff00 & 0xff00 |
              (local_f4 - 0xff) * uVar4 * 0x100 + 0xff0000 & 0xff0000 | uVar7 << 0x18;
    }
    local_98 = param_6;
    local_68 = __ptr;
    if (__ptr[2] <= DAT_005db338) {
      pdVar9 = __ptr + 4;
    }
    else {
      uVar7 = 2 - (DAT_005db338 < __ptr[2]);
      pdVar9 = __ptr + (ulong)uVar7 * 2;
      memmove(__ptr + (ulong)uVar7 * 2 + 2,pdVar9,(ulong)(2 - uVar7) << 4);
    }
    *pdVar9 = 0.5;
    *(uint *)(pdVar9 + 1) = uVar4;
    local_5c = 3;
    uVar4 = 0x110000ff;
    if (0xffffff < uVar1) {
      uVar4 = (uVar10 ^ 0xff) * 0xee >> 8 ^ 0xff;
      uVar10 = (uVar10 * 0xee) / uVar4;
      uVar4 = (((uVar1 & 0xff) - 0xff) * uVar10 >> 8) - 1 & 0xff |
              local_f0 * uVar10 & 0xff00 | local_f4 * uVar10 * 0x100 & 0xff0000 | uVar4 << 0x18;
    }
    lVar8 = 0;
    if (((_DAT_005de628 < *__ptr) || (lVar8 = 1, _DAT_005de628 < __ptr[2])) ||
       (lVar8 = 2, _DAT_005de628 < __ptr[4])) {
      pdVar9 = __ptr + lVar8 * 2;
      memmove(__ptr + lVar8 * 2 + 2,pdVar9,(ulong)((uint)lVar8 ^ 3) << 4);
    }
    else {
      pdVar9 = __ptr + 6;
    }
    this = local_98;
    *pdVar9 = 0.51;
    *(uint *)(pdVar9 + 1) = uVar4;
    local_5c = 4;
                    /* try { // try from 0021dc80 to 0021dd46 has its CatchHandler @ 0021de43 */
    Graphics::setGradientFill(local_98,(undefined8 *)&local_80);
    cVar2 = (**(code **)(**(long **)(this + 8) + 0x68))();
    if ((cVar2 == '\0') && ((long)uStack_e0._4_4_ != 0)) {
      pfVar5 = local_e8;
      do {
        fVar12 = *pfVar5;
        if ((fVar12 != DAT_005de3d0) || (NAN(fVar12) || NAN(DAT_005de3d0))) {
          if ((fVar12 != DAT_005de3d4) || (NAN(fVar12) || NAN(DAT_005de3d4))) {
            if (((fVar12 != DAT_005de3d8) || (NAN(fVar12) || NAN(DAT_005de3d8))) &&
               ((fVar12 != DAT_005de3dc || (NAN(fVar12) || NAN(DAT_005de3dc))))) goto LAB_0021dce4;
          }
          local_b8 = ZEXT416(DAT_005d9038);
          local_a8 = 0x3f800000;
          (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_e8,local_b8);
          break;
        }
        pfVar5 = pfVar5 + 2;
LAB_0021dce4:
        pfVar5 = pfVar5 + 1;
      } while (pfVar5 != local_e8 + uStack_e0._4_4_);
    }
    Graphics::setColour(this,0x80000000);
    local_90[1] = 0.0;
    local_90[2] = 0.0;
    local_b8 = ZEXT416(DAT_005d9038);
    local_a8 = 0x3f800000;
                    /* try { // try from 0021dd79 to 0021de08 has its CatchHandler @ 0021de41 */
    local_90[0] = param_5;
    cVar2 = (**(code **)(**(long **)(this + 8) + 0x68))();
    if ((cVar2 == '\0') && ((long)uStack_e0._4_4_ != 0)) {
      pfVar5 = local_e8;
      do {
        fVar12 = *pfVar5;
        if ((fVar12 != DAT_005de3d0) || (NAN(fVar12) || NAN(DAT_005de3d0))) {
          if ((fVar12 != DAT_005de3d4) || (NAN(fVar12) || NAN(DAT_005de3d4))) {
            if (((fVar12 != DAT_005de3d8) || (NAN(fVar12) || NAN(DAT_005de3d8))) &&
               ((fVar12 != DAT_005de3dc || (NAN(fVar12) || NAN(DAT_005de3dc))))) goto LAB_0021ddc4;
          }
          (**(code **)(**(long **)(this + 8) + 0xd8))
                    (*(long **)(this + 8),&local_e8,local_90,local_b8);
          break;
        }
        pfVar5 = pfVar5 + 2;
LAB_0021ddc4:
        pfVar5 = pfVar5 + 1;
      } while (pfVar5 != local_e8 + uStack_e0._4_4_);
    }
    free(__ptr);
    uStack_e0 = uStack_e0 & 0xffffffff;
    free(local_e8);
  }
  return;
}


