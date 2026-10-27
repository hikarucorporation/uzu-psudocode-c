// Function : map
// Namespace: OT:DeltaSetIndexMap
// Entry    : 00418170
// Prototype: uint map(DeltaSetIndexMap * this, uint param_1)
// Body     : 00418170 - 00418262


/* OT::DeltaSetIndexMap::map(unsigned int) const */

uint __thiscall OT::DeltaSetIndexMap::map(DeltaSetIndexMap *this,uint param_1)

{
  int iVar1;
  DeltaSetIndexMap DVar2;
  DeltaSetIndexMap DVar3;
  sbyte sVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  
  if (*this == (DeltaSetIndexMap)0x1) {
    uVar7 = *(uint *)(this + 2);
    if (uVar7 == 0) {
      return param_1;
    }
    uVar6 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = uVar6 - 1;
    if (param_1 < uVar6) {
      uVar7 = param_1;
    }
    DVar3 = this[1];
    iVar1 = ((byte)DVar3 >> 4 & 3) + 1;
    uVar8 = (ulong)(uVar7 * iVar1);
    uVar7 = (uint)(byte)this[uVar8 + 6];
    if (((byte)DVar3 >> 4 & 3) == 0) goto LAB_00418248;
    uVar5 = CONCAT11(this[uVar8 + 6],this[uVar8 + 7]);
    uVar7 = (uint)uVar5;
    cVar9 = (char)iVar1;
    if ((cVar9 == '\x02') || (uVar7 = (uint)CONCAT21(uVar5,this[uVar8 + 8]), cVar9 == '\x03'))
    goto LAB_00418248;
    DVar2 = this[uVar8 + 9];
  }
  else {
    if (*this != (DeltaSetIndexMap)0x0) {
      return param_1;
    }
    uVar5 = *(ushort *)(this + 2);
    if (uVar5 == 0) {
      return param_1;
    }
    uVar5 = uVar5 << 8 | uVar5 >> 8;
    uVar7 = uVar5 - 1;
    if (param_1 < uVar5) {
      uVar7 = param_1;
    }
    DVar3 = this[1];
    iVar1 = ((byte)DVar3 >> 4 & 3) + 1;
    uVar8 = (ulong)(uVar7 * iVar1);
    uVar7 = (uint)(byte)this[uVar8 + 4];
    if (((byte)DVar3 >> 4 & 3) == 0) goto LAB_00418248;
    uVar5 = CONCAT11(this[uVar8 + 4],this[uVar8 + 5]);
    uVar7 = (uint)uVar5;
    cVar9 = (char)iVar1;
    if ((cVar9 == '\x02') || (uVar7 = (uint)CONCAT21(uVar5,this[uVar8 + 6]), cVar9 == '\x03'))
    goto LAB_00418248;
    DVar2 = this[uVar8 + 7];
  }
  uVar7 = uVar7 << 8 | (uint)(byte)DVar2;
LAB_00418248:
  sVar4 = ((byte)DVar3 & 0xf) + 1;
  return (uVar7 >> sVar4) << 0x10 | ~(-1 << sVar4) & uVar7;
}


