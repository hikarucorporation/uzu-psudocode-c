// Function : get_png_extents
// Namespace: OT:sbix:accelerator_t
// Entry    : 0044f430
// Prototype: bool get_png_extents(accelerator_t * this, long param_1, uint param_2, int * param_3, char param_4)
// Body     : 0044f430 - 0044f84b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::sbix::accelerator_t::get_png_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*, bool)
   const */

bool __thiscall
OT::sbix::accelerator_t::get_png_extents
          (accelerator_t *this,long param_1,uint param_2,int *param_3,char param_4)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  ushort *puVar7;
  int *__ptr;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar15;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  int iVar16;
  float fVar17;
  uint local_84;
  int local_80;
  int local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  
  puVar9 = *(undefined4 **)this;
  psVar6 = (short *)&_hb_NullPool;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = &_hb_NullPool;
  }
  if (7 < (uint)puVar9[6]) {
    psVar6 = *(short **)(puVar9 + 4);
  }
  if (*psVar6 != 0) {
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    puVar7 = (ushort *)choose_strike(this,param_1);
    __ptr = SBIXStrike::get_glyph_blob
                      (puVar7,param_2,*(int **)this,&local_7c,&local_80,*(uint *)(this + 8),
                       &local_84);
    if ((uint)__ptr[6] < 0x1d) {
      puVar9 = &_hb_NullPool;
      uVar4 = DAT_005f4750._4_4_ >> 0x18 | (DAT_005f4750._4_4_ & 0xff0000) >> 8 |
              (DAT_005f4750._4_4_ & 0xff00) << 8 | DAT_005f4750._4_4_ << 0x18;
    }
    else {
      puVar9 = *(undefined4 **)(__ptr + 4);
      uVar4 = puVar9[5];
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    if (uVar4 < 0x10000) {
      uVar10 = puVar9[4];
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      if (uVar10 < 0x10000) {
        *param_3 = local_7c;
        iVar8 = local_80 + uVar4;
        param_3[1] = iVar8;
        param_3[2] = uVar10;
        iVar5 = -uVar4;
        param_3[3] = iVar5;
        iVar13 = local_7c;
        if ((local_84 != 0) && (param_4 != '\0')) {
          lVar2 = *(long *)(param_1 + 0x20);
          uVar4 = *(uint *)(lVar2 + 0x14);
          if (uVar4 == 0) {
            puVar9 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                     ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                            *)(lVar2 + 0x70));
            uVar3 = *(ushort *)((long)puVar9 + 0x12) << 8 | *(ushort *)((long)puVar9 + 0x12) >> 8;
            uVar4 = 1000;
            if (uVar3 - 0x10 < 0x3ff1) {
              uVar4 = (uint)uVar3;
            }
            *(uint *)(lVar2 + 0x14) = uVar4;
            iVar13 = *param_3;
            iVar8 = param_3[1];
            uVar10 = param_3[2];
            iVar5 = param_3[3];
          }
          else {
          }
          fVar17 = (float)uVar4 / (float)local_84;
          local_78 = fVar17 * (float)iVar13 + _DAT_0065b250;
          fStack_74 = fVar17 * (float)iVar8 + _UNK_0065b254;
          fStack_70 = fVar17 * (float)(int)uVar10 + _UNK_0065b258;
          fStack_6c = fVar17 * (float)iVar5 + _UNK_0065b25c;
          local_68 = floorf(fStack_6c);
          fStack_64 = (float)extraout_XMM0_Db;
          fVar17 = floorf(fStack_70);
          uStack_5c = fStack_64;
          fStack_64 = local_68;
          local_68 = fVar17;
          local_58 = floorf(local_78);
          fStack_54 = extraout_XMM0_Db_00;
          fStack_50 = extraout_XMM0_Dc;
          fStack_4c = extraout_XMM0_Dd;
          fVar17 = floorf(fStack_74);
          iVar13 = (int)local_58;
          iVar8 = (int)fVar17;
          uVar10 = (uint)local_68;
          iVar5 = (int)fStack_64;
          *param_3 = iVar13;
          param_3[1] = iVar8;
          param_3[2] = uVar10;
          param_3[3] = iVar5;
        }
        if (param_4 != '\0') {
          fStack_4c = *(float *)(param_1 + 0x4c);
          local_58 = fStack_4c * (float)((int)((uVar10 + iVar13) * 0x10000) >> 0x10);
          fStack_54 = fStack_4c * (float)(int)(short)iVar13;
          fStack_50 = fStack_4c * 0.0;
          fStack_4c = fStack_4c * 0.0;
          fStack_6c = *(float *)(param_1 + 0x50);
          local_78 = fStack_6c * (float)(int)(short)iVar8;
          fStack_74 = fStack_6c * (float)((iVar5 + iVar8) * 0x10000 >> 0x10);
          fStack_70 = fStack_6c * 0.0;
          fStack_6c = fStack_6c * 0.0;
          fVar17 = *(float *)(param_1 + 0x48);
          if ((fVar17 != 0.0) || (NAN(fVar17))) {
            fVar14 = fVar17 * local_78;
            fVar15 = fVar17 * fStack_74;
            uVar4 = -(uint)(fVar15 <= fVar17 * fStack_70);
            uVar10 = -(uint)(fVar15 <= fVar17 * fStack_6c);
            local_58 = local_58 +
                       (float)(~-(uint)(fVar15 <= fVar14) & (uint)fVar15 |
                              (uint)fVar14 & -(uint)(fVar15 <= fVar14));
            fStack_54 = fStack_54 +
                        (float)(~-(uint)(fVar14 <= fVar15) & (uint)fVar15 |
                               (uint)fVar14 & -(uint)(fVar14 <= fVar15));
            fStack_50 = fStack_50 + (float)(~uVar4 & (uint)fVar15 | (uint)fVar14 & uVar4);
            fStack_4c = fStack_4c + (float)(~uVar10 & (uint)fVar15 | (uint)fVar14 & uVar10);
          }
          local_48 = floorf(fStack_54);
          iVar12 = (int)local_48;
          *param_3 = iVar12;
          local_68 = floorf(local_78);
          iVar13 = (int)local_68;
          param_3[1] = iVar13;
          fStack_64 = extraout_XMM0_Db_01;
          uStack_5c = (float)extraout_XMM0_Dd_00;
          fVar17 = ceilf(local_58);
          iVar16 = (int)local_48;
          param_3[2] = (int)(fVar17 - (float)iVar16);
          fVar14 = ceilf(fStack_74);
          param_3[3] = (int)(fVar14 - (float)(int)local_68);
          iVar8 = *(int *)(param_1 + 0x3c);
          iVar5 = *(int *)(param_1 + 0x40);
          if (iVar8 != 0 || iVar5 != 0) {
            iVar11 = -iVar5;
            if (-1 < *(int *)(param_1 + 0x2c)) {
              iVar11 = iVar5;
            }
            param_3[1] = iVar13 + iVar11;
            param_3[3] = (int)(fVar14 - (float)(int)local_68) - iVar11;
            iVar5 = -iVar8;
            if (-1 < *(int *)(param_1 + 0x28)) {
              iVar5 = iVar8;
            }
            if (*(char *)(param_1 + 0x38) != '\0') {
              *param_3 = iVar12 - iVar5 / 2;
            }
            param_3[2] = iVar5 + (int)(fVar17 - (float)iVar16);
          }
        }
        if (*__ptr != 0) {
          LOCK();
          *__ptr = *__ptr + -1;
          UNLOCK();
          if (*__ptr == 0) {
            *__ptr = -0xdead;
            ppVar1 = *(pthread_mutex_t **)(__ptr + 2);
            if (ppVar1 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar1[1].__data,ppVar1);
              free(ppVar1);
              __ptr[2] = 0;
              __ptr[3] = 0;
            }
            if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0044f7fe to 0044f7ff has its CatchHandler @ 0044f84c */
              (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
            }
            free(__ptr);
          }
        }
        return local_84 != 0;
      }
    }
    if (*__ptr != 0) {
      LOCK();
      *__ptr = *__ptr + -1;
      UNLOCK();
      if (*__ptr == 0) {
        *__ptr = -0xdead;
        ppVar1 = *(pthread_mutex_t **)(__ptr + 2);
        if (ppVar1 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar1[1].__data,ppVar1);
          free(ppVar1);
          __ptr[2] = 0;
          __ptr[3] = 0;
        }
        if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0044f53a to 0044f53b has its CatchHandler @ 0044f854 */
          (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
        }
        free(__ptr);
      }
    }
  }
  return false;
}


