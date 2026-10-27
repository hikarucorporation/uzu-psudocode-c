// Function : toRGB
// Namespace: juce:ColourHelpers:HSB
// Entry    : 002eb6a0
// Prototype: uint toRGB(float param_1, float param_2, float param_3, int param_4)
// Body     : 002eb6a0 - 002eb8de


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ColourHelpers::HSB::toRGB(float, float, float, unsigned char) */

uint __cdecl juce::ColourHelpers::HSB::toRGB(float param_1,float param_2,float param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = param_3 * DAT_005de3b0;
  fVar7 = DAT_005de3b0;
  if (fVar6 <= DAT_005de3b0) {
    fVar7 = fVar6;
  }
  fVar7 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar7);
  bVar2 = SUB81((double)fVar7 + DAT_005d9098,0);
  bVar4 = bVar2;
  bVar3 = bVar2;
  if (0.0 < param_2) {
    if (DAT_005d9038 <= param_2) {
      param_2 = DAT_005d9038;
    }
    fVar6 = floorf(param_1);
    fVar6 = ((param_1 - fVar6) * _DAT_005de4f0) / _DAT_005de520;
    fVar5 = floorf(fVar6);
    fVar5 = fVar6 - fVar5;
    bVar1 = SUB81((double)((DAT_005d9038 - param_2) * fVar7) + DAT_005d9098,0);
    if (fVar6 < DAT_005d9038) {
      bVar3 = SUB81((double)(fVar7 * (DAT_005d9038 - param_2 * (DAT_005d9038 - fVar5))) +
                    DAT_005d9098,0);
      bVar2 = bVar1;
    }
    else if (fVar6 < DAT_005d9078) {
      bVar4 = SUB81((double)(fVar7 * (DAT_005d9038 - param_2 * fVar5)) + DAT_005d9098,0);
      bVar2 = bVar1;
    }
    else if (DAT_0065449c <= fVar6) {
      if (DAT_005d94d4 <= fVar6) {
        bVar3 = bVar1;
        if (DAT_00652628 <= fVar6) {
          bVar2 = SUB81((double)(fVar7 * (DAT_005d9038 - param_2 * fVar5)) + DAT_005d9098,0);
        }
        else {
          bVar4 = SUB81((double)(fVar7 * (DAT_005d9038 - param_2 * (DAT_005d9038 - fVar5))) +
                        DAT_005d9098,0);
        }
      }
      else {
        bVar4 = bVar1;
        bVar3 = SUB81((double)(fVar7 * (DAT_005d9038 - param_2 * fVar5)) + DAT_005d9098,0);
      }
    }
    else {
      bVar4 = bVar1;
      bVar2 = SUB81((double)(fVar7 * (DAT_005d9038 - param_2 * (DAT_005d9038 - fVar5))) +
                    DAT_005d9098,0);
    }
  }
  return (uint)bVar2 | (uint)bVar3 << 8 | (uint)bVar4 << 0x10 | param_4 << 0x18;
}


