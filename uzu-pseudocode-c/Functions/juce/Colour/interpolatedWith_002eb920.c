// Function : interpolatedWith
// Namespace: juce:Colour
// Entry    : 002eb920
// Prototype: ulong interpolatedWith(float param_1, Colour * this, ulong param_3)
// Body     : 002eb920 - 002ebb05


/* juce::Colour::interpolatedWith(juce::Colour, float) const */

ulong __thiscall juce::Colour::interpolatedWith(float param_1,Colour *this,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1 <= 0.0) {
    uVar3 = (ulong)*(uint *)this;
  }
  else {
    uVar3 = param_3 & 0xffffffff;
    if (param_1 < DAT_005d9038) {
      uVar8 = *(uint *)this;
      uVar12 = uVar8 >> 8;
      uVar11 = uVar8 >> 0x10;
      uVar5 = uVar8 >> 0x18;
      cVar4 = (char)(uVar8 >> 0x18);
      if (cVar4 == -1) {
        uVar5 = uVar8;
      }
      else if (cVar4 == '\0') {
        uVar11 = 0;
        uVar12 = 0;
        uVar5 = 0;
      }
      else {
        uVar12 = (uVar12 & 0xff) * uVar5 + 0x7f >> 8;
        uVar11 = (uVar11 & 0xff) * uVar5 + 0x7f >> 8;
        uVar5 = (uVar8 & 0xff) * uVar5 + 0x7f >> 8;
      }
      uVar1 = (uint)(param_3 >> 8);
      uVar6 = uVar1 & 0xffffff;
      bVar10 = (byte)(param_3 >> 0x10);
      uVar9 = (uint)(param_3 >> 0x18) & 0xff;
      cVar4 = (char)(param_3 >> 0x18);
      if (cVar4 == -1) {
        bVar7 = (byte)param_3;
      }
      else if (cVar4 == '\0') {
        bVar10 = 0;
        uVar6 = 0;
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)(((uint)param_3 & 0xff) * uVar9 + 0x7f >> 8);
        uVar6 = (uVar1 & 0xff) * uVar9 + 0x7f >> 8;
        bVar10 = (byte)(((uint)(param_3 >> 0x10) & 0xff) * uVar9 + 0x7f >> 8);
      }
      uVar12 = (uVar12 & 0xff) << 8 | uVar8 & 0xff000000;
      uVar8 = uVar5 & 0xff | (uVar11 & 0xff) << 0x10;
      iVar2 = SUB84((double)(param_1 * DAT_005de3b0) + DAT_005d9098,0);
      uVar8 = ((((uint)bVar10 * 0x10000 - uVar8) + (uint)bVar7) * iVar2 >> 8) + uVar8;
      uVar12 = ((((uVar6 & 0xff) << 8 | (uint)param_3 & 0xff000000) >> 8) - (uVar12 >> 8)) * iVar2 +
               uVar12;
      uVar5 = uVar8 >> 0x10;
      bVar10 = (byte)(uVar12 >> 0x18);
      if (bVar10 == 0xff) {
        uVar11 = uVar12 >> 8 & 0xff00ff;
      }
      else if (bVar10 == 0) {
        uVar5 = 0;
        uVar11 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = ((uVar8 & 0xff) * 0xff) / (uVar12 >> 0x18);
        if (0xfe < uVar8) {
          uVar8 = 0xff;
        }
        uVar11 = ((uVar12 >> 8 & 0xff) * 0xff) / (uint)(ushort)bVar10;
        if (0xfe < uVar11) {
          uVar11 = 0xff;
        }
        uVar5 = ((uVar5 & 0xff) * 0xff) / (uint)(ushort)bVar10;
        if (0xfe < uVar5) {
          uVar5 = 0xff;
        }
      }
      return (ulong)(uVar8 & 0xff |
                    (uVar11 & 0xff) << 8 | (uVar5 & 0xff) << 0x10 | uVar12 & 0xff000000);
    }
  }
  return uVar3;
}


