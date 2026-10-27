// Function : apply
// Namespace: AAT:NoncontextualSubtable_AAT__ObsoleteTypes_
// Entry    : 003e44f0
// Prototype: undefined apply(NoncontextualSubtable<AAT::ObsoleteTypes> * this, long param_1)
// Body     : 003e44f0 - 003e4808


/* AAT::NoncontextualSubtable<AAT::ObsoleteTypes>::apply(AAT::hb_aat_apply_context_t*) const */

void __thiscall
AAT::NoncontextualSubtable<AAT::ObsoleteTypes>::apply
          (NoncontextualSubtable<AAT::ObsoleteTypes> *this,long param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  GDEF *this_00;
  long lVar4;
  long lVar5;
  pthread_mutex_t *__ptr;
  ushort uVar6;
  uint uVar7;
  Lookup<OT::HBGlyphID16> *pLVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined1 local_34;
  undefined1 local_33;
  
  this_00 = *(GDEF **)(param_1 + 0x70);
  sVar1 = *(short *)this_00;
  sVar2 = *(short *)(this_00 + 4);
  lVar4 = *(long *)(param_1 + 0x18);
  uVar11 = *(uint *)(lVar4 + 0x18);
  if (uVar11 == 0xffffffff) {
    piVar10 = *(int **)(lVar4 + 0x78);
    if (piVar10 == (int *)0x0) {
      do {
        lVar5 = *(long *)(lVar4 + 0x68);
        piVar10 = &_hb_NullPool;
        if (lVar5 == 0) goto LAB_003e469e;
        local_70[0] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_33 = 0;
        local_44 = 0;
        uStack_3c = 0;
        local_34 = 1;
        piVar10 = &_hb_NullPool;
                    /* try { // try from 003e4722 to 003e473e has its CatchHandler @ 003e4811 */
        if ((*(code **)(lVar5 + 0x20) != (code *)0x0) &&
           (piVar10 = (int *)(**(code **)(lVar5 + 0x20))
                                       (lVar5,0x6d617870,*(undefined8 *)(lVar5 + 0x28)),
           piVar10 == (int *)0x0)) {
          piVar10 = &_hb_NullPool;
        }
        piVar10 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                            ((hb_sanitize_context_t *)local_70,piVar10);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar10 == (int *)0x0) {
          piVar10 = &_hb_NullPool;
          LOCK();
          bVar17 = *(long *)(lVar4 + 0x78) == 0;
          if (bVar17) {
            *(long *)(lVar4 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar17 = *(long *)(lVar4 + 0x78) == 0;
          if (bVar17) {
            *(long *)(lVar4 + 0x78) = (long)piVar10;
          }
          UNLOCK();
        }
        if (bVar17) goto LAB_003e469e;
        if (((piVar10 != (int *)0x0) && (piVar10 != &_hb_NullPool)) && (*piVar10 != 0)) {
          LOCK();
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (*piVar10 == 0) {
            *piVar10 = -0xdead;
            __ptr = *(pthread_mutex_t **)(piVar10 + 2);
            if (__ptr != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &__ptr[1].__data,__ptr);
              free(__ptr);
              piVar10[2] = 0;
              piVar10[3] = 0;
            }
            if (*(code **)(piVar10 + 10) != (code *)0x0) {
                    /* try { // try from 003e47cb to 003e47cc has its CatchHandler @ 003e4809 */
              (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
            }
            free(piVar10);
          }
        }
        piVar10 = *(int **)(lVar4 + 0x78);
      } while (piVar10 == (int *)0x0);
    }
LAB_003e469e:
    if ((uint)piVar10[6] < 6) {
      puVar9 = &_hb_NullPool;
    }
    else {
      puVar9 = *(undefined4 **)(piVar10 + 4);
    }
    uVar3 = *(ushort *)(puVar9 + 1);
    uVar11 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
    if (uVar3 == 0) {
      uVar11 = 0;
    }
    *(uint *)(lVar4 + 0x18) = uVar11;
  }
  lVar4 = *(long *)(param_1 + 0x78);
  uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x60);
  if ((lVar4 == 0) || (*(uint *)(lVar4 + 4) < 2)) {
    puVar15 = (uint *)0x0;
  }
  else {
    puVar15 = *(uint **)(lVar4 + 8);
  }
  if (uVar13 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
    uVar14 = 0;
    do {
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)0x0;
LAB_003e45f3:
        pLVar8 = Lookup<OT::HBGlyphID16>::get_value
                           ((Lookup<OT::HBGlyphID16> *)this,*(uint *)(lVar4 + uVar14 * 0x14),uVar11)
        ;
        if (pLVar8 != (Lookup<OT::HBGlyphID16> *)0x0) {
          uVar3 = *(ushort *)pLVar8;
          uVar6 = uVar3 << 8 | uVar3 >> 8;
          *(uint *)(uVar14 * 0x14 + lVar4) = (uint)uVar6;
          *(ulong *)(param_1 + 0x80) =
               *(ulong *)(param_1 + 0x80) | 1L << ((byte)(uVar6 >> 4) & 0x3f);
          *(ulong *)(param_1 + 0x88) =
               *(ulong *)(param_1 + 0x88) | 1L << ((byte)(uVar3 >> 8) & 0x3f);
          *(ulong *)(param_1 + 0x90) = *(ulong *)(param_1 + 0x90) | 1L << ((byte)uVar3 >> 1 & 0x3f);
          if (sVar1 == 0x100 && sVar2 != 0) {
            uVar7 = OT::GDEF::get_glyph_props(this_00,(uint)uVar6);
            *(short *)(lVar4 + 0xc + uVar14 * 0x14) = (short)uVar7;
          }
        }
      }
      else {
        uVar7 = *(uint *)(lVar4 + 8 + uVar14 * 0x14);
        puVar12 = puVar15 + 3;
        puVar16 = puVar15;
        do {
          puVar16 = puVar16 + -3;
          puVar15 = puVar12 + -2;
          puVar12 = puVar12 + -3;
        } while (uVar7 < *puVar15);
        do {
          puVar15 = puVar16 + 3;
          puVar12 = puVar16 + 5;
          puVar16 = puVar15;
        } while (*puVar12 < uVar7);
        if ((*puVar15 & *(uint *)(param_1 + 0xe0)) != 0) goto LAB_003e45f3;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar13);
  }
  return;
}


