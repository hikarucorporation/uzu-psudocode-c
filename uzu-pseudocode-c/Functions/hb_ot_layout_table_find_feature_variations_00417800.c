// Function : hb_ot_layout_table_find_feature_variations
// Namespace: 
// Entry    : 00417800
// Prototype: undefined hb_ot_layout_table_find_feature_variations(long param_1, int param_2, long param_3, ulong param_4, GDEFVersion1_2<OT::Layout::SmallTypes> * param_5)
// Body     : 00417800 - 00417b17


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hb_ot_layout_table_find_feature_variations
               (long param_1,int param_2,long param_3,ulong param_4,
               GDEFVersion1_2<OT::Layout::SmallTypes> *param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  uint *puVar5;
  short *psVar6;
  accelerator_t *this;
  ushort uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 extraout_RDX;
  ulong uVar10;
  Condition *this_00;
  ulong uVar11;
  ushort *puVar12;
  bool bVar13;
  bool bVar14;
  undefined4 *local_70;
  undefined8 local_68;
  long local_60;
  ulong local_58;
  undefined8 local_50;
  GDEFVersion1_2<OT::Layout::SmallTypes> *local_48;
  undefined4 *local_40;
  ulong local_38;
  
  uVar11 = param_4;
  local_48 = param_5;
  puVar5 = get_gsubgpos_table(param_1,param_2);
  this = *(accelerator_t **)(param_1 + 0x128);
  while (this == (accelerator_t *)0x0) {
    lVar3 = *(long *)(param_1 + 0x68);
    if (lVar3 == 0) {
LAB_00417abf:
      this = (accelerator_t *)&_hb_NullPool;
      break;
    }
    this = calloc(1,0x218);
    if (this == (accelerator_t *)0x0) {
      LOCK();
      bVar13 = *(long *)(param_1 + 0x128) == 0;
      if (bVar13) {
        *(long *)(param_1 + 0x128) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar13) goto LAB_00417abf;
    }
    else {
      OT::GDEF::accelerator_t::accelerator_t(this,lVar3,extraout_RDX,uVar11,param_5);
      LOCK();
      bVar13 = *(long *)(param_1 + 0x128) == 0;
      if (bVar13) {
        *(long *)(param_1 + 0x128) = (long)this;
      }
      UNLOCK();
      if (bVar13) break;
      OT::GDEF::accelerator_t::~accelerator_t(this);
      free(this);
    }
    this = *(accelerator_t **)(param_1 + 0x128);
  }
  puVar8 = *(undefined4 **)this;
  psVar6 = (short *)&_hb_NullPool;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = &_hb_NullPool;
  }
  if (3 < (uint)puVar8[6]) {
    psVar6 = *(short **)(puVar8 + 4);
  }
  if ((*psVar6 == 0x100) &&
     (0x10002 < (((uint)(ushort)psVar6[1] | ((ushort)psVar6[1] & 0xff) << 0x10) >> 8 | 0x10000))) {
    uVar9 = *(uint *)(psVar6 + 7);
    if (uVar9 == 0) {
      local_70 = &_hb_NullPool;
    }
    else {
      local_70 = (undefined4 *)
                 ((long)psVar6 +
                 (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                        uVar9 << 0x18));
    }
    if (local_70 == (undefined4 *)0x0) {
      local_70 = &_hb_NullPool;
    }
  }
  else {
    local_70 = &_hb_NullPool;
  }
  local_50 = 0;
  local_58 = param_4 & 0xffffffff;
  local_68 = 0;
  local_40 = &_hb_NullPool;
  if (((short)*puVar5 == 0x100) &&
     (uVar9 = *puVar5,
     0x10000 < (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18))) {
    uVar9 = *(uint *)((long)puVar5 + 10);
    if (uVar9 == 0) {
      local_40 = &_hb_NullPool;
      uVar9 = _DAT_005f4744;
      goto joined_r0x00417af7;
    }
    local_40 = (undefined4 *)
               ((long)puVar5 +
               (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18));
  }
  uVar9 = local_40[1];
joined_r0x00417af7:
  if (uVar9 == 0) {
LAB_00417afd:
    uVar9 = 0xffffffff;
  }
  else {
    uVar2 = local_40[2];
    if (uVar2 == 0) {
      puVar12 = (ushort *)&_hb_NullPool;
      uVar7 = (ushort)_hb_NullPool;
    }
    else {
      puVar12 = (ushort *)
                ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                        uVar2 << 0x18) + (long)local_40);
      uVar7 = *puVar12;
    }
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar7 = uVar7 << 8 | uVar7 >> 8;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      local_38 = (ulong)(uVar9 - 1);
      uVar11 = 0;
      local_60 = param_3;
      do {
        uVar9 = 1;
        if (1 < uVar7) {
          uVar9 = (uint)uVar7;
        }
        bVar13 = true;
        uVar10 = 1;
        do {
          uVar2 = *(uint *)(puVar12 + uVar10 * 2 + -1);
          this_00 = (Condition *)&_hb_NullPool;
          if (uVar2 != 0) {
            this_00 = (Condition *)
                      ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                              uVar2 << 0x18) + (long)puVar12);
          }
          bVar4 = OT::Condition::evaluate<OT::ItemVarStoreInstancer>
                            (this_00,param_3,(uint)param_4,(long *)&local_70);
          if (bVar4 == 0) break;
          bVar13 = uVar10 < uVar7;
          bVar14 = uVar10 != uVar9;
          uVar10 = uVar10 + 1;
        } while (bVar14);
        uVar9 = (uint)uVar11;
        if (!bVar13) break;
        if (uVar11 == local_38) goto LAB_00417afd;
        uVar9 = uVar9 + 1;
        uVar2 = local_40[(ulong)uVar9 * 2 + 2];
        puVar12 = (ushort *)&_hb_NullPool;
        if (uVar2 != 0) {
          puVar12 = (ushort *)
                    ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18) + (long)local_40);
        }
        uVar1 = *puVar12;
        uVar7 = uVar1 << 8 | uVar1 >> 8;
        uVar11 = uVar11 + 1;
      } while (uVar1 != 0);
    }
  }
  *(uint *)local_48 = uVar9;
  return;
}


