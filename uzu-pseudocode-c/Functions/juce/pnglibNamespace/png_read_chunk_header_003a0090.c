// Function : png_read_chunk_header
// Namespace: juce:pnglibNamespace
// Entry    : 003a0090
// Prototype: ulong png_read_chunk_header(pnglibNamespace * this)
// Body     : 003a0090 - 003a02d8


/* juce::pnglibNamespace::png_read_chunk_header(juce::pnglibNamespace::png_struct_def*) */

ulong __thiscall juce::pnglibNamespace::png_read_chunk_header(pnglibNamespace *this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar8;
  ulong uVar7;
  ulong uVar9;
  uint local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  ulong local_38;
  
  *(undefined4 *)(this + 0x36c) = 0x21;
  if (*(code **)(this + 0x20) != (code *)0x0) {
    (**(code **)(this + 0x20))(this,&local_40,8);
    uVar9 = (ulong)local_40 << 0x20;
    uVar9 = (ulong)(local_40 >> 0x18) | (uVar9 & 0xff000000000000) >> 0x28 |
            (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8;
    if (-1 < (int)uVar9) {
      uVar5 = (uint)local_3a << 8 | (uint)local_3b << 0x10 | (uint)local_3c << 0x18 | (uint)local_39
      ;
      *(uint *)(this + 0x138) = uVar5;
      *(undefined4 *)(this + 0x16c) = 0;
      bVar1 = (~*(uint *)(this + 0x50) & 0x300) != 0;
      if ((local_3c & 0x20) == 0) {
        bVar1 = (*(uint *)(this + 0x50) & 0x800) == 0;
      }
      if (bVar1) {
        local_38 = uVar9;
        uVar9 = zlibNamespace::crc32_z(0,(ulong *)&local_3c,4);
        *(int *)(this + 0x16c) = (int)uVar9;
        uVar9 = local_38;
      }
      if (((((0xffffffc5 < local_39 - 0x7b) && (5 < local_39 - 0x5b)) &&
           (0xffffffc5 < local_3a - 0x7b)) &&
          ((5 < local_3a - 0x5b && (0xffffffc5 < local_3b - 0x7b)))) &&
         ((5 < local_3b - 0x5b && ((0xffffffc5 < local_3c - 0x7b && (5 < local_3c - 0x5b)))))) {
        uVar6 = 0x7fffffff;
        if (*(ulong *)(this + 0x328) - 1 < 0x7ffffffe) {
          uVar6 = *(ulong *)(this + 0x328);
        }
        if (uVar5 == 0x49444154) {
          lVar2 = (2 - (ulong)((byte)this[0x188] < 9)) *
                  (ulong)(byte)this[0x18b] * (ulong)*(uint *)(this + 0x118);
          lVar8 = lVar2 + 6;
          if (this[0x184] == (pnglibNamespace)0x0) {
            lVar8 = lVar2;
          }
          uVar7 = lVar8 + 1;
          if (uVar7 >> 0x20 == 0) {
            uVar3 = 0xffffffff / (uVar7 & 0xffffffff);
          }
          else {
            uVar3 = 0;
          }
          uVar4 = 0x7fffffff;
          if (*(uint *)(this + 0x11c) <= uVar3) {
            uVar4 = uVar7 * *(uint *)(this + 0x11c);
          }
          uVar3 = 0x7f36;
          if (uVar7 < 0x7f36) {
            uVar3 = uVar7;
          }
          if (uVar4 >> 0x20 == 0) {
            uVar3 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
          }
          else {
            uVar3 = uVar4 / uVar3;
          }
          uVar3 = uVar3 * 5 + uVar4 + 0xb;
          uVar7 = 0x7fffffff;
          if (uVar3 < 0x7fffffff) {
            uVar7 = uVar3;
          }
          if (uVar6 < uVar7) {
            uVar6 = uVar7;
          }
        }
        if (uVar9 <= uVar6) {
          *(undefined4 *)(this + 0x36c) = 0x41;
          return uVar9 & 0xffffffff;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(this);
}


