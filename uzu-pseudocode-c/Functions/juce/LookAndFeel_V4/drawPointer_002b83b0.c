// Function : drawPointer
// Namespace: juce:LookAndFeel_V4
// Entry    : 002b83b0
// Prototype: undefined drawPointer(float param_1, float param_2, float param_3, Graphics * param_4, undefined4 * param_5, int param_6)
// Body     : 002b83b0 - 002b86ed


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V4::drawPointer(juce::Graphics&, float, float, float, juce::Colour const&, int)
    */

void __cdecl
juce::LookAndFeel_V4::drawPointer
          (float param_1,float param_2,float param_3,Graphics *param_4,undefined4 *param_5,
          int param_6)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float __x;
  float fVar7;
  float *local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88;
  float local_80;
  float local_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float local_58;
  undefined1 local_48 [16];
  
  local_a8 = (float *)0x0;
  uStack_a0 = 0;
  local_88 = 1;
  fVar7 = DAT_005d9044 * param_3;
  local_98 = fVar7 + param_1;
  local_48 = ZEXT416((uint)local_98);
  fStack_94 = local_98;
  fStack_90 = param_2;
  fStack_8c = param_2;
  local_58 = param_2;
  local_a8 = malloc(0x20);
  *local_a8 = 100002.0;
  local_a8[1] = (float)local_48._0_4_;
  uStack_a0._0_4_ = 8;
  uStack_a0._4_4_ = 3;
  local_a8[2] = local_58;
  local_80 = param_1 + param_3;
  local_7c = DAT_005d98e8 * param_3 + local_58;
  Path::lineTo(local_80,local_7c,(Path *)&local_a8);
  fVar6 = param_3 + local_58;
  Path::lineTo(local_80,fVar6,(Path *)&local_a8);
  Path::lineTo(param_1,fVar6,(Path *)&local_a8);
  Path::lineTo(param_1,local_7c,(Path *)&local_a8);
  lVar3 = (long)uStack_a0._4_4_;
  if (lVar3 != 0) {
    if (0 < uStack_a0._4_4_) {
      if ((local_a8[uStack_a0._4_4_ - 1] == DAT_005de41c) &&
         (!NAN(local_a8[uStack_a0._4_4_ - 1]) && !NAN(DAT_005de41c))) goto LAB_002b855a;
    }
    iVar5 = uStack_a0._4_4_ + 1;
    if ((int)(uint)uStack_a0 <= uStack_a0._4_4_) {
      uVar4 = uStack_a0._4_4_ + iVar5 / 2 + 9U & 0xfffffff8;
      if ((uint)uStack_a0 != uVar4) {
        if ((int)uVar4 < 1) {
          free(local_a8);
          local_a8 = (float *)0x0;
        }
        else {
          local_a8 = realloc(local_a8,(ulong)uVar4 << 2);
        }
      }
      uStack_a0._0_4_ = uVar4;
    }
    local_a8[lVar3] = 100005.0;
    uStack_a0._4_4_ = iVar5;
  }
LAB_002b855a:
  __x = (float)param_6 * DAT_005de3fc;
  fVar7 = fVar7 + local_58;
  fVar6 = cosf(__x);
  fStack_6c = sinf(__x);
  local_78._4_4_ = _DAT_006524b0 ^ (uint)fStack_6c;
  local_78._0_4_ = fVar6;
  fStack_70 = (fStack_6c * fVar7 - fVar6 * (float)local_48._0_4_) + (float)local_48._0_4_;
  local_68 = CONCAT44(((float)(_DAT_006524b0 ^ (uint)fStack_6c) * (float)local_48._0_4_ -
                      fVar7 * fVar6) + fVar7,fVar6);
  Path::applyTransform((Path *)&local_a8,(float *)local_78);
                    /* try { // try from 002b8615 to 002b86c9 has its CatchHandler @ 002b86ee */
  Graphics::setColour(param_4,*param_5);
  cVar1 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
  if ((cVar1 == '\0') && ((long)uStack_a0._4_4_ != 0)) {
    pfVar2 = local_a8;
    do {
      fVar7 = *pfVar2;
      if ((fVar7 != DAT_005de3d0) || (NAN(fVar7) || NAN(DAT_005de3d0))) {
        if ((fVar7 != DAT_005de3d4) || (NAN(fVar7) || NAN(DAT_005de3d4))) {
          if (((fVar7 != DAT_005de3d8) || (NAN(fVar7) || NAN(DAT_005de3d8))) &&
             ((fVar7 != DAT_005de3dc || (NAN(fVar7) || NAN(DAT_005de3dc))))) goto LAB_002b8674;
        }
        _local_78 = ZEXT416(DAT_005d9038);
        local_68 = 0x3f800000;
        (**(code **)(**(long **)(param_4 + 8) + 200))(*(long **)(param_4 + 8),&local_a8,local_78);
        break;
      }
      pfVar2 = pfVar2 + 2;
LAB_002b8674:
      pfVar2 = pfVar2 + 1;
    } while (pfVar2 != local_a8 + uStack_a0._4_4_);
  }
  uStack_a0 = (ulong)(uint)uStack_a0;
  free(local_a8);
  return;
}


