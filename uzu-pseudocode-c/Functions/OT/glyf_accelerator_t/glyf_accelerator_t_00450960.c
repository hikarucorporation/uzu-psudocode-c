// Function : glyf_accelerator_t
// Namespace: OT:glyf_accelerator_t
// Entry    : 00450960
// Prototype: undefined glyf_accelerator_t(glyf_accelerator_t * this, hb_face_t * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00450960 - 00451039


/* OT::glyf_accelerator_t::glyf_accelerator_t(hb_face_t*) */

void __thiscall
OT::glyf_accelerator_t::glyf_accelerator_t
          (glyf_accelerator_t *this,hb_face_t *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  hb_face_t *phVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  accelerator_t *this_00;
  accelerator_t *this_01;
  accelerator_t *this_02;
  uint uVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined7 uVar12;
  undefined1 uVar13;
  bool bVar14;
  undefined4 local_b0 [2];
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  int *local_80;
  uint local_78;
  undefined2 local_74;
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
  
  uVar12 = (undefined7)((ulong)param_4 >> 8);
  *(undefined8 *)(this + 9) = 0;
  *(undefined8 *)(this + 0x11) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  puVar7 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
           ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                  *)(param_1 + 0x70));
  puVar8 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
           ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                  *)(param_1 + 0x70));
  if (((ushort)(*(ushort *)((long)puVar8 + 0x32) << 8 | *(ushort *)((long)puVar8 + 0x32) >> 8) < 2)
     && ((ushort)(*(ushort *)(puVar8 + 0xd) << 8 | *(ushort *)(puVar8 + 0xd) >> 8) < 2)) {
    this[0x18] = (glyf_accelerator_t)(*(short *)((long)puVar7 + 0x32) == 0);
    piVar9 = *(int **)(param_1 + 0xd8);
    if (piVar9 == (int *)0x0) {
      do {
        piVar9 = &_hb_NullPool;
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_004509e6;
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
                    /* try { // try from 00450c75 to 00450c7c has its CatchHandler @ 0045105b */
        piVar9 = hb_sanitize_context_t::reference_table<OT::loca>
                           ((hb_sanitize_context_t *)local_70,*(long *)(param_1 + 0x68));
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar9 == (int *)0x0) {
          piVar9 = &_hb_NullPool;
          LOCK();
          bVar14 = *(long *)(param_1 + 0xd8) == 0;
          if (bVar14) {
            *(int **)(param_1 + 0xd8) = &_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar14 = *(long *)(param_1 + 0xd8) == 0;
          if (bVar14) {
            *(int **)(param_1 + 0xd8) = piVar9;
          }
          UNLOCK();
        }
        if (bVar14) goto LAB_004509e6;
        if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            *piVar9 = -0xdead;
            ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
            if (ppVar3 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar3[1].__data,ppVar3);
              free(ppVar3);
              piVar9[2] = 0;
              piVar9[3] = 0;
            }
            if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 00450cfa to 00450cfb has its CatchHandler @ 00451044 */
              (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
            }
            free(piVar9);
          }
        }
        piVar9 = *(int **)(param_1 + 0xd8);
      } while (piVar9 == (int *)0x0);
    }
LAB_004509e6:
    *(int **)(this + 0x20) = piVar9;
    local_b0[0] = 0;
    local_84 = 0;
    local_80 = (int *)0x0;
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_78 = 0x10000;
    local_74 = 0;
    uVar10 = *(uint *)(param_1 + 0x18);
    if (uVar10 == 0xffffffff) {
      piVar9 = *(int **)(param_1 + 0x78);
      if (piVar9 == (int *)0x0) {
        do {
          lVar5 = *(long *)(param_1 + 0x68);
          piVar9 = &_hb_NullPool;
          if (lVar5 == 0) goto LAB_00450d48;
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
          piVar9 = &_hb_NullPool;
                    /* try { // try from 00450f69 to 00450f83 has its CatchHandler @ 0045104c */
          if ((*(code **)(lVar5 + 0x20) != (code *)0x0) &&
             (piVar9 = (int *)(**(code **)(lVar5 + 0x20))
                                        (lVar5,0x6d617870,*(undefined8 *)(lVar5 + 0x28)),
             piVar9 == (int *)0x0)) {
            piVar9 = &_hb_NullPool;
          }
          piVar9 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                             ((hb_sanitize_context_t *)local_70,piVar9);
          hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
          if (piVar9 == (int *)0x0) {
            piVar9 = &_hb_NullPool;
            LOCK();
            bVar14 = *(long *)(param_1 + 0x78) == 0;
            if (bVar14) {
              *(int **)(param_1 + 0x78) = &_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar14 = *(long *)(param_1 + 0x78) == 0;
            if (bVar14) {
              *(int **)(param_1 + 0x78) = piVar9;
            }
            UNLOCK();
          }
          if (bVar14) goto LAB_00450d48;
          if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
            LOCK();
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              *piVar9 = -0xdead;
              ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
              if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00450fd9 to 00450fdd has its CatchHandler @ 00451042 */
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar3[1].__data,ppVar3);
                free(ppVar3);
                piVar9[2] = 0;
                piVar9[3] = 0;
              }
              if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 00450ffc to 00450ffd has its CatchHandler @ 0045103a */
                (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
              }
              free(piVar9);
            }
          }
          piVar9 = *(int **)(param_1 + 0x78);
        } while (piVar9 == (int *)0x0);
      }
LAB_00450d48:
      if ((uint)piVar9[6] < 6) {
        puVar7 = &_hb_NullPool;
      }
      else {
        puVar7 = *(undefined4 **)(piVar9 + 4);
      }
      uVar1 = *(ushort *)(puVar7 + 1);
      uVar10 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
      if (uVar1 == 0) {
        uVar10 = 0;
      }
      *(uint *)(param_1 + 0x18) = uVar10;
    }
    local_74 = CONCAT11(local_74._1_1_,1);
    local_78 = uVar10;
                    /* try { // try from 00450a53 to 00450b16 has its CatchHandler @ 0045106d */
    if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
       (piVar9 = (int *)(**(code **)(param_1 + 0x20))
                                  (param_1,0x676c7966,*(undefined8 *)(param_1 + 0x28)),
       piVar9 == (int *)0x0)) {
      piVar9 = &_hb_NullPool;
      iVar2 = _hb_NullPool;
    }
    else {
      iVar2 = *piVar9;
    }
    if (iVar2 != 0) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    local_88 = 0;
    local_a8 = *(long *)(piVar9 + 4);
    local_98._0_4_ = piVar9[6];
    uVar11 = (ulong)(uint)local_98;
    lStack_a0 = uVar11 + local_a8;
    uVar13 = (int)(uVar11 * 0x40 >> 0x20) != 0;
    uVar6 = (uint)(uVar11 * 0x40);
    uVar10 = 0x4000;
    if (0x4000 < uVar6) {
      uVar10 = uVar6;
    }
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    local_98._4_4_ = 0x3fffffff;
    if (!(bool)uVar13) {
      local_98._4_4_ = uVar10;
    }
    local_84 = 0;
    local_b0[0] = 0;
    uStack_90 = uStack_90 & 0xffffffff;
    local_80 = piVar9;
    if (local_a8 == 0) {
                    /* try { // try from 00450d5b to 00450d64 has its CatchHandler @ 0045106d */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b0);
    }
    else {
      if (*piVar9 != 0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          *piVar9 = -0xdead;
          ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
          if (ppVar3 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar3[1].__data,ppVar3);
            free(ppVar3);
            piVar9[2] = 0;
            piVar9[3] = 0;
          }
          if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 00450b34 to 00450b35 has its CatchHandler @ 00451065 */
            (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
          }
          free(piVar9);
        }
      }
      local_80 = (int *)0x0;
      local_a8 = 0;
      lStack_a0 = 0;
      local_98._0_4_ = 0;
      if (piVar9[1] != 0) {
        piVar9[1] = 0;
      }
    }
    *(int **)(this + 0x28) = piVar9;
    hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b0);
    this_00 = *(accelerator_t **)(param_1 + 0x110);
    while (this_00 == (accelerator_t *)0x0) {
      phVar4 = *(hb_face_t **)(param_1 + 0x68);
      if (phVar4 == (hb_face_t *)0x0) {
LAB_00450ddc:
        this_00 = (accelerator_t *)&_hb_NullPool;
        break;
      }
      this_00 = calloc(1,0x20);
      if (this_00 == (accelerator_t *)0x0) {
        LOCK();
        bVar14 = *(long *)(param_1 + 0x110) == 0;
        if (bVar14) {
          *(int **)(param_1 + 0x110) = &_hb_NullPool;
        }
        UNLOCK();
        if (bVar14) goto LAB_00450ddc;
      }
      else {
        gvar::accelerator_t::accelerator_t(this_00,phVar4);
        LOCK();
        bVar14 = *(long *)(param_1 + 0x110) == 0;
        if (bVar14) {
          *(accelerator_t **)(param_1 + 0x110) = this_00;
        }
        UNLOCK();
        if (bVar14) break;
        gvar::accelerator_t::~accelerator_t(this_00);
        free(this_00);
      }
      this_00 = *(accelerator_t **)(param_1 + 0x110);
    }
    *(accelerator_t **)this = this_00;
    this_01 = *(accelerator_t **)(param_1 + 0x90);
    while (this_01 == (accelerator_t *)0x0) {
      phVar4 = *(hb_face_t **)(param_1 + 0x68);
      if (phVar4 == (hb_face_t *)0x0) {
LAB_00450e56:
        this_01 = (accelerator_t *)&_hb_NullPool;
        break;
      }
      this_01 = calloc(1,0x28);
      if (this_01 == (accelerator_t *)0x0) {
        LOCK();
        bVar14 = *(long *)(param_1 + 0x90) == 0;
        if (bVar14) {
          *(int **)(param_1 + 0x90) = &_hb_NullPool;
        }
        UNLOCK();
        if (bVar14) goto LAB_00450e56;
      }
      else {
        hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t
                  (this_01,phVar4,extraout_RDX,uVar11,CONCAT71(uVar12,uVar13));
        LOCK();
        bVar14 = *(long *)(param_1 + 0x90) == 0;
        if (bVar14) {
          *(accelerator_t **)(param_1 + 0x90) = this_01;
        }
        UNLOCK();
        if (bVar14) break;
        hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::~accelerator_t(this_01);
        free(this_01);
      }
      this_01 = *(accelerator_t **)(param_1 + 0x90);
    }
    *(accelerator_t **)(this + 8) = this_01;
    this_02 = *(accelerator_t **)(param_1 + 200);
    while (this_02 == (accelerator_t *)0x0) {
      phVar4 = *(hb_face_t **)(param_1 + 0x68);
      if (phVar4 == (hb_face_t *)0x0) {
LAB_00450ed0:
        this_02 = (accelerator_t *)&_hb_NullPool;
        break;
      }
      this_02 = calloc(1,0x28);
      if (this_02 == (accelerator_t *)0x0) {
        LOCK();
        bVar14 = *(long *)(param_1 + 200) == 0;
        if (bVar14) {
          *(int **)(param_1 + 200) = &_hb_NullPool;
        }
        UNLOCK();
        if (bVar14) goto LAB_00450ed0;
      }
      else {
        hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
                  (this_02,phVar4,extraout_RDX_00,uVar11,CONCAT71(uVar12,uVar13));
        LOCK();
        bVar14 = *(long *)(param_1 + 200) == 0;
        if (bVar14) {
          *(accelerator_t **)(param_1 + 200) = this_02;
        }
        UNLOCK();
        if (bVar14) break;
        hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::~accelerator_t(this_02);
        free(this_02);
      }
      this_02 = *(accelerator_t **)(param_1 + 200);
    }
    *(accelerator_t **)(this + 0x10) = this_02;
    puVar7 = &_hb_NullPool;
    if (*(undefined4 **)(this + 0x20) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(this + 0x20);
    }
    uVar6 = (uint)puVar7[6] >> (this[0x18] == (glyf_accelerator_t)0x0) + 1;
    uVar10 = 1;
    if (uVar6 != 0) {
      uVar10 = uVar6;
    }
    uVar10 = uVar10 - 1;
    *(uint *)(this + 0x1c) = uVar10;
    uVar6 = *(uint *)(param_1 + 0x18);
    if (uVar6 == 0xffffffff) {
      uVar6 = hb_face_t::load_num_glyphs(param_1);
      uVar10 = *(uint *)(this + 0x1c);
    }
    if (uVar6 < uVar10) {
      uVar10 = uVar6;
    }
    *(uint *)(this + 0x1c) = uVar10;
  }
  return;
}


