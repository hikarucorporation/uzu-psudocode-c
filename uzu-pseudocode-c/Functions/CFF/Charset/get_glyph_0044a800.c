// Function : get_glyph
// Namespace: CFF:Charset
// Entry    : 0044a800
// Prototype: int get_glyph(Charset * this, uint param_1, uint param_2)
// Body     : 0044a800 - 0044a912


/* CFF::Charset::get_glyph(unsigned int, unsigned int) const */

int __thiscall CFF::Charset::get_glyph(Charset *this,uint param_1,uint param_2)

{
  Charset CVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  CVar1 = *this;
  if (CVar1 == (Charset)0x2) {
    if ((param_1 != 0) && (1 < param_2)) {
      uVar2 = 1;
      uVar6 = 0;
      do {
        uVar4 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar6 * 4 + 1) << 8 |
                              *(ushort *)(this + (ulong)uVar6 * 4 + 1) >> 8);
        uVar5 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar6 * 4 + 3) << 8 |
                              *(ushort *)(this + (ulong)uVar6 * 4 + 3) >> 8);
        if ((uVar4 <= param_1) && (param_1 <= uVar5 + uVar4)) goto LAB_0044a909;
        uVar2 = uVar2 + uVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar2 < param_2);
    }
  }
  else if (CVar1 == (Charset)0x1) {
    if ((param_1 != 0) && (1 < param_2)) {
      uVar2 = 1;
      uVar6 = 0;
      do {
        uVar4 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar6 * 3 + 1) << 8 |
                              *(ushort *)(this + (ulong)uVar6 * 3 + 1) >> 8);
        if ((uVar4 <= param_1) && (param_1 <= (byte)this[(ulong)uVar6 * 3 + 3] + uVar4)) {
LAB_0044a909:
          return (uVar2 + param_1) - uVar4;
        }
        uVar2 = uVar2 + (byte)this[(ulong)uVar6 * 3 + 3] + 1;
        uVar6 = uVar6 + 1;
      } while (uVar2 < param_2);
    }
  }
  else if (((CVar1 == (Charset)0x0) && (param_1 != 0)) && (1 < param_2)) {
    lVar3 = 0;
    do {
      if ((ushort)(*(ushort *)(this + lVar3 * 2 + 1) << 8 | *(ushort *)(this + lVar3 * 2 + 1) >> 8)
          == param_1) {
        return (int)lVar3 + 1;
      }
      lVar3 = lVar3 + 1;
    } while ((ulong)param_2 - 1 != lVar3);
  }
  return 0;
}


