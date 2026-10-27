// Function : process_blend
// Namespace: CFF:cff2_cs_interp_env_t_CFF__number_t_
// Entry    : 0045b800
// Prototype: undefined process_blend(cff2_cs_interp_env_t<CFF::number_t> * this)
// Body     : 0045b800 - 0045ba9a


/* CFF::cff2_cs_interp_env_t<CFF::number_t>::process_blend() */

void __thiscall
CFF::cff2_cs_interp_env_t<CFF::number_t>::process_blend(cff2_cs_interp_env_t<CFF::number_t> *this)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  VarRegionList *this_00;
  ulong uVar12;
  float fVar13;
  
  if (this[0x11a2] != (cff2_cs_interp_env_t<CFF::number_t>)0x0) {
    return;
  }
  lVar10 = *(long *)(this + 0x1180);
  puVar6 = &_hb_NullPool;
  puVar9 = &_hb_NullPool;
  if (*(uint *)(this + 0x118c) <
      (uint)(ushort)(*(ushort *)(lVar10 + 8) << 8 | *(ushort *)(lVar10 + 8) >> 8)) {
    puVar9 = (uint *)(lVar10 + (ulong)*(uint *)(this + 0x118c) * 4 + 10);
  }
  uVar7 = *puVar9;
  if (uVar7 != 0) {
    puVar6 = (undefined4 *)
             (lVar10 + (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                              uVar7 << 0x18) + 2);
  }
  uVar2 = *(ushort *)(puVar6 + 1);
  uVar7 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
  *(uint *)(this + 0x1188) = uVar7;
  if (this[0x11a0] == (cff2_cs_interp_env_t<CFF::number_t>)0x0) goto LAB_0045ba6e;
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  uVar3 = *(uint *)(this + 0x1190);
  if ((int)uVar3 < 0) {
LAB_0045b8e1:
    *(int *)(this + 0xc) = *(int *)(this + 8) + 1;
    goto LAB_0045ba6e;
  }
  uVar4 = *(uint *)(this + 0x1194);
  if (*(uint *)(this + 0x1194) <= uVar7) {
    uVar4 = uVar7;
  }
  if ((uVar3 < uVar4) || (uVar4 < uVar3 >> 2)) {
    if (0x3fffffff < uVar4) {
LAB_0045b8d8:
      *(uint *)(this + 0x1190) = ~uVar3;
      goto LAB_0045b8e1;
    }
    if (uVar4 == 0) {
      free(*(void **)(this + 0x1198));
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = realloc(*(void **)(this + 0x1198),(ulong)uVar4 << 2);
      if (pvVar5 == (void *)0x0) {
        uVar3 = *(uint *)(this + 0x1190);
        if (uVar4 <= uVar3) goto LAB_0045b906;
        goto LAB_0045b8d8;
      }
    }
    *(void **)(this + 0x1198) = pvVar5;
    *(uint *)(this + 0x1190) = uVar4;
  }
LAB_0045b906:
  uVar3 = *(uint *)(this + 0x1194);
  if (uVar3 < uVar7) {
    uVar4 = (uVar7 - uVar3) * 4;
    if (uVar4 != 0) {
      memset((void *)((ulong)uVar3 * 4 + *(long *)(this + 0x1198)),0,(ulong)uVar4);
    }
    *(uint *)(this + 0x1194) = uVar7;
    lVar10 = *(long *)(this + 0x1180);
    uVar12 = (ulong)*(uint *)(this + 0x118c);
    lVar11 = *(long *)(this + 0x1170);
    uVar3 = *(uint *)(this + 0x1178);
LAB_0045b980:
    puVar8 = *(undefined8 **)(this + 0x1198);
  }
  else {
    *(uint *)(this + 0x1194) = uVar7;
    lVar10 = *(long *)(this + 0x1180);
    uVar12 = (ulong)*(uint *)(this + 0x118c);
    lVar11 = *(long *)(this + 0x1170);
    uVar3 = *(uint *)(this + 0x1178);
    if (uVar7 != 0) goto LAB_0045b980;
    _hb_CrapPool._0_4_ = 0;
    puVar8 = &_hb_CrapPool;
  }
  uVar7 = *(uint *)(this + 0x1188);
  this_00 = (VarRegionList *)&_hb_NullPool;
  puVar9 = &_hb_NullPool;
  if ((uint)uVar12 < (uint)(ushort)(*(ushort *)(lVar10 + 8) << 8 | *(ushort *)(lVar10 + 8) >> 8)) {
    puVar9 = (uint *)(lVar10 + uVar12 * 4 + 10);
  }
  uVar4 = *puVar9;
  puVar6 = &_hb_NullPool;
  if (uVar4 != 0) {
    puVar6 = (undefined4 *)
             (lVar10 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18) + 2);
  }
  uVar4 = *(uint *)(lVar10 + 4);
  if (uVar4 != 0) {
    this_00 = (VarRegionList *)
              (lVar10 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                               uVar4 << 0x18) + 2);
  }
  uVar2 = *(ushort *)(puVar6 + 1) << 8 | *(ushort *)(puVar6 + 1) >> 8;
  uVar4 = uVar7;
  if (uVar2 < uVar7) {
    uVar4 = (uint)uVar2;
  }
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      uVar1 = *(ushort *)((long)puVar6 + uVar12 * 2 + 6);
      fVar13 = OT::VarRegionList::evaluate
                         (this_00,(uint)(ushort)(uVar1 << 8 | uVar1 >> 8),lVar11,uVar3,0);
      *(float *)((long)puVar8 + uVar12 * 4) = fVar13;
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
  }
  if (uVar2 < uVar7) {
    memset((void *)((long)puVar8 + (ulong)uVar4 * 4),0,(ulong)(uVar7 + ~uVar4) * 4 + 4);
  }
LAB_0045ba6e:
  this[0x11a2] = (cff2_cs_interp_env_t<CFF::number_t>)0x1;
  return;
}


