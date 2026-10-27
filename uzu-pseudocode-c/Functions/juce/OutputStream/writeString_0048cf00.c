// Function : writeString
// Namespace: juce:OutputStream
// Entry    : 0048cf00
// Prototype: undefined writeString(OutputStream * this, undefined8 * param_1)
// Body     : 0048cf00 - 0048d048


/* juce::OutputStream::writeString(juce::String const&) */

void __thiscall juce::OutputStream::writeString(OutputStream *this,undefined8 *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  lVar6 = 0;
  pbVar7 = (byte *)*param_1;
  do {
    pbVar8 = pbVar7 + 1;
    bVar1 = *pbVar7;
    uVar5 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) != 0) {
        if ((bVar1 & 0x20) == 0) {
          uVar5 = 0x3f;
          lVar4 = 0;
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          if ((bVar1 & 0x10) == 0) {
            uVar5 = 0x1f;
            lVar4 = 1;
            bVar3 = false;
          }
          else {
            uVar5 = 0xf;
            lVar4 = 2;
            bVar3 = true;
          }
        }
        uVar5 = bVar1 & uVar5;
        if ((pbVar7[1] & 0xffffffc0) == 0x80) {
          pbVar9 = pbVar7 + lVar4 + 2;
          uVar5 = pbVar7[1] & 0x3f | uVar5 << 6;
          pbVar8 = pbVar9;
          if (bVar2) {
            pbVar8 = pbVar7 + 2;
            if (((*pbVar8 & 0xc0) == 0x80) &&
               (uVar5 = *pbVar8 & 0x3f | uVar5 << 6, pbVar8 = pbVar9, bVar3)) {
              bVar1 = pbVar7[3];
              pbVar8 = pbVar7 + 3;
              if ((bVar1 & 0xc0) == 0x80) {
                uVar5 = uVar5 << 6 | bVar1 & 0x3f;
                pbVar8 = pbVar9;
              }
            }
          }
        }
        goto joined_r0x0048d002;
      }
      uVar5 = bVar1 & 0x7f;
      if ((bVar1 & 0x7f) == 0) {
LAB_0048d03a:
                    /* WARNING: Could not recover jumptable at 0x0048d047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x28))(this,(byte *)*param_1,lVar6 + 1);
        return;
      }
    }
    else {
joined_r0x0048d002:
      if (uVar5 == 0) goto LAB_0048d03a;
    }
    lVar4 = 1;
    if ((0x7f < uVar5) && (lVar4 = 2, 0x7ff < uVar5)) {
      lVar4 = 4 - (ulong)(uVar5 < 0x10000);
    }
    lVar6 = lVar6 + lVar4;
    pbVar7 = pbVar8;
  } while( true );
}


