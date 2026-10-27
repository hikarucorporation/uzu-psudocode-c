// Function : hb_ot_paint_glyph
// Namespace: 
// Entry    : 00447610
// Prototype: undefined hb_ot_paint_glyph(long param_1, undefined8 param_2, uint param_3, long param_4, undefined8 param_5, uint param_6, uint param_7)
// Body     : 00447610 - 00447dbf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_paint_glyph(hb_font_t*, void*, unsigned int, hb_paint_funcs_t*, void*, unsigned int,
   unsigned int, void*) */

void __cdecl
hb_ot_paint_glyph(long param_1,undefined8 param_2,uint param_3,long param_4,undefined8 param_5,
                 uint param_6,uint param_7)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long lVar5;
  hb_face_t *phVar6;
  bool bVar7;
  COLR *this;
  ulong uVar8;
  accelerator_t *paVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ushort *puVar14;
  accelerator_t *this_00;
  glyf_accelerator_t *this_01;
  accelerator_t *paVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar19;
  accelerator_t *paVar20;
  accelerator_t *this_02;
  uint uVar21;
  uint local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  accelerator_t *local_50;
  ulong local_48;
  accelerator_t local_40 [8];
  uint local_38;
  int local_34;
  
  this = (COLR *)hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
                        *)(*(long *)(param_1 + 0x20) + 0x180));
  local_48 = (ulong)param_7;
  uVar8 = OT::COLR::paint_glyph(this,param_1,param_3,param_4,param_5,param_6,param_7,'\x01');
  if ((char)uVar8 != '\0') {
    return;
  }
  paVar9 = hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
           ::get((hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
                  *)(*(long *)(param_1 + 0x20) + 0x1a0));
  piVar11 = *(int **)paVar9;
  paVar15 = (accelerator_t *)&_hb_NullPool;
  piVar10 = piVar11;
  if (piVar11 == (int *)0x0) {
    piVar10 = &_hb_NullPool;
  }
  if (9 < (uint)piVar10[6]) {
    paVar15 = *(accelerator_t **)(piVar10 + 4);
  }
  uVar21 = *(uint *)(paVar15 + 2);
  piVar10 = (int *)(ulong)uVar21;
  if (uVar21 != 0) {
    uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
    piVar10 = (int *)(ulong)uVar21;
    uVar1 = *(ushort *)(paVar15 + (long)piVar10);
    paVar20 = (accelerator_t *)&_hb_NullPool;
    if (uVar1 != 0) {
      paVar15 = paVar15 + (long)piVar10;
      iVar19 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
      iVar17 = 0;
      do {
        while( true ) {
          uVar16 = (uint)(iVar19 + iVar17) >> 1;
          lVar3 = (ulong)uVar16 * 0xc;
          if (param_3 < (ushort)(*(ushort *)(paVar15 + lVar3 + 2) << 8 |
                                *(ushort *)(paVar15 + lVar3 + 2) >> 8)) break;
          if (param_3 <=
              (ushort)(*(ushort *)(paVar15 + lVar3 + 4) << 8 | *(ushort *)(paVar15 + lVar3 + 4) >> 8
                      )) {
            paVar20 = paVar15 + (ulong)uVar16 * 0xc + 2;
            goto LAB_00447747;
          }
          iVar17 = uVar16 + 1;
          if (iVar19 < iVar17) goto LAB_00447736;
        }
        iVar19 = uVar16 - 1;
      } while (iVar17 <= iVar19);
LAB_00447736:
      paVar20 = (accelerator_t *)&_hb_NullPool;
    }
LAB_00447747:
    uVar16 = *(uint *)(paVar20 + 4);
    uVar2 = *(uint *)(paVar20 + 8);
    piVar11 = hb_blob_create_sub_blob
                        (piVar11,(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                 | uVar16 << 0x18) + uVar21,
                         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18);
    if (piVar11 != &_hb_NullPool) {
      if (*(long *)(param_4 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x38);
      }
      (**(code **)(param_4 + 0x48))
                (*(undefined4 *)(param_1 + 0x48),param_4,param_5,piVar11,0,0,0x73766720,0,uVar18);
      if (piVar11 == (int *)0x0) {
        return;
      }
      if (*piVar11 == 0) {
        return;
      }
      LOCK();
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 != 0) {
        return;
      }
      *piVar11 = -0xdead;
      ppVar4 = *(pthread_mutex_t **)(piVar11 + 2);
      if (ppVar4 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar4[1].__data,ppVar4);
        free(ppVar4);
        piVar11[2] = 0;
        piVar11[3] = 0;
      }
      if (*(code **)(piVar11 + 10) != (code *)0x0) {
                    /* try { // try from 00447a2c to 00447a2d has its CatchHandler @ 00447dc8 */
        (**(code **)(piVar11 + 10))(*(undefined8 *)(piVar11 + 8));
      }
      free(piVar11);
      return;
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  paVar20 = *(accelerator_t **)(lVar3 + 400);
  if (paVar20 == (accelerator_t *)0x0) {
    this_02 = (accelerator_t *)&_hb_NullPool;
    do {
      lVar5 = *(long *)(lVar3 + 0x68);
      if (lVar5 == 0) goto LAB_0044779e;
      paVar20 = calloc(1,0x18);
      if (paVar20 == (accelerator_t *)0x0) {
        LOCK();
        bVar7 = *(long *)(lVar3 + 400) == 0;
        if (bVar7) {
          *(long *)(lVar3 + 400) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar7) goto LAB_0044779e;
      }
      else {
        local_50 = paVar20;
        OT::CBDT::accelerator_t::accelerator_t(paVar20,lVar5);
        paVar20 = local_50;
        LOCK();
        bVar7 = *(long *)(lVar3 + 400) == 0;
        if (bVar7) {
          *(long *)(lVar3 + 400) = (long)local_50;
        }
        UNLOCK();
        paVar15 = local_50;
        if (bVar7) {
          this_02 = local_50;
          goto LAB_0044779e;
        }
        OT::CBDT::accelerator_t::~accelerator_t(local_50);
        free(paVar20);
      }
      paVar20 = *(accelerator_t **)(lVar3 + 400);
    } while (paVar20 == (accelerator_t *)0x0);
  }
  this_02 = paVar20;
LAB_0044779e:
  piVar11 = OT::CBDT::accelerator_t::reference_png(this_02,param_1,param_3);
  if (piVar11 == &_hb_NullPool) {
LAB_00447bea:
    lVar3 = *(long *)(param_1 + 0x20);
    this_00 = *(accelerator_t **)(lVar3 + 0x198);
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar3 == 0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = *(int **)(lVar3 + 0x68);
    }
    paVar15 = (accelerator_t *)&local_68;
    iVar19 = (**(code **)(*(long *)(param_1 + 0x90) + 0x88))
                       (param_1,*(undefined8 *)(param_1 + 0x98),param_3);
    if (iVar19 == 0) goto LAB_00447bea;
    paVar15 = local_40;
    uVar18 = 0;
    piVar10 = (int *)0x0;
    uVar12 = OT::CBDT::accelerator_t::get_extents(this_02,param_1,param_3,(int *)paVar15,'\0');
    if ((char)uVar12 == '\0') goto LAB_00447bea;
    paVar15 = (accelerator_t *)(ulong)local_38;
    piVar10 = (int *)(ulong)(uint)-local_34;
    if (*(long *)(param_4 + 0x80) != 0) {
      uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x38);
    }
    iVar19 = (**(code **)(param_4 + 0x48))
                       (*(undefined4 *)(param_1 + 0x48),param_4,param_5,piVar11,paVar15,piVar10,
                        0x706e6720,&local_68,uVar18);
    if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        *piVar11 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(piVar11 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar11[2] = 0;
          piVar11[3] = 0;
        }
        if (*(code **)(piVar11 + 10) != (code *)0x0) {
                    /* try { // try from 004478ba to 004478bb has its CatchHandler @ 00447dd0 */
          (**(code **)(piVar11 + 10))(*(undefined8 *)(piVar11 + 8));
        }
        free(piVar11);
      }
    }
    if (iVar19 != 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    this_00 = *(accelerator_t **)(lVar3 + 0x198);
  }
  if (this_00 == (accelerator_t *)0x0) {
    do {
      lVar5 = *(long *)(lVar3 + 0x68);
      if (lVar5 == 0) {
LAB_00447c82:
        this_00 = (accelerator_t *)&_hb_NullPool;
        break;
      }
      this_00 = calloc(1,0x10);
      if (this_00 == (accelerator_t *)0x0) {
        LOCK();
        bVar7 = *(long *)(lVar3 + 0x198) == 0;
        if (bVar7) {
          *(long *)(lVar3 + 0x198) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar7) goto LAB_00447c82;
      }
      else {
        OT::sbix_accelerator_t::sbix_accelerator_t
                  ((sbix_accelerator_t *)this_00,lVar5,extraout_RDX,paVar15,piVar10);
        LOCK();
        bVar7 = *(long *)(lVar3 + 0x198) == 0;
        if (bVar7) {
          *(long *)(lVar3 + 0x198) = (long)this_00;
        }
        UNLOCK();
        if (bVar7) break;
        OT::sbix::accelerator_t::~accelerator_t(this_00);
        free(this_00);
      }
      this_00 = *(accelerator_t **)(lVar3 + 0x198);
    } while (this_00 == (accelerator_t *)0x0);
  }
  puVar13 = *(undefined4 **)this_00;
  paVar15 = (accelerator_t *)&_hb_NullPool;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = &_hb_NullPool;
  }
  if (7 < (uint)puVar13[6]) {
    paVar15 = *(accelerator_t **)(puVar13 + 4);
  }
  if (*(short *)paVar15 != 0) {
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    puVar14 = (ushort *)OT::sbix::accelerator_t::choose_strike(this_00,param_1);
    piVar10 = &local_70;
    piVar11 = OT::SBIXStrike::get_glyph_blob
                        (puVar14,param_3,*(int **)this_00,&local_6c,piVar10,*(uint *)(this_00 + 8),
                         &local_74);
    paVar15 = (accelerator_t *)&_hb_NullPool;
    if (piVar11 != &_hb_NullPool) {
      local_68 = 0;
      uStack_60 = 0;
      lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar3 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = *(int **)(lVar3 + 0x68);
      }
      paVar15 = (accelerator_t *)&local_68;
      iVar19 = (**(code **)(*(long *)(param_1 + 0x90) + 0x88))
                         (param_1,*(undefined8 *)(param_1 + 0x98),param_3);
      if (iVar19 != 0) {
        paVar15 = local_40;
        uVar18 = 0;
        piVar10 = (int *)0x0;
        bVar7 = OT::sbix::accelerator_t::get_png_extents
                          (this_00,param_1,param_3,(int *)paVar15,'\0');
        if (bVar7) {
          paVar15 = (accelerator_t *)(ulong)local_38;
          piVar10 = (int *)(ulong)(uint)-local_34;
          if (*(long *)(param_4 + 0x80) != 0) {
            uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x38);
          }
          iVar19 = (**(code **)(param_4 + 0x48))
                             (*(undefined4 *)(param_1 + 0x48),param_4,param_5,piVar11,paVar15,
                              piVar10,0x706e6720,&local_68,uVar18);
          if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
            LOCK();
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (*piVar11 == 0) {
              *piVar11 = -0xdead;
              ppVar4 = *(pthread_mutex_t **)(piVar11 + 2);
              if (ppVar4 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar4[1].__data,ppVar4);
                free(ppVar4);
                piVar11[2] = 0;
                piVar11[3] = 0;
              }
              if (*(code **)(piVar11 + 10) != (code *)0x0) {
                    /* try { // try from 00447b20 to 00447b21 has its CatchHandler @ 00447dc0 */
                (**(code **)(piVar11 + 10))(*(undefined8 *)(piVar11 + 8));
              }
              free(piVar11);
              if (iVar19 != 0) {
                return;
              }
              goto LAB_00447b38;
            }
          }
          if (iVar19 != 0) {
            return;
          }
        }
      }
    }
  }
LAB_00447b38:
  lVar3 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(lVar3 + 0xe0);
  while ((lVar5 == 0 && (phVar6 = *(hb_face_t **)(lVar3 + 0x68), phVar6 != (hb_face_t *)0x0))) {
    this_01 = calloc(1,0x30);
    if (this_01 == (glyf_accelerator_t *)0x0) {
      LOCK();
      bVar7 = *(long *)(lVar3 + 0xe0) == 0;
      if (bVar7) {
        *(long *)(lVar3 + 0xe0) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar7) break;
    }
    else {
      OT::glyf_accelerator_t::glyf_accelerator_t(this_01,phVar6,extraout_RDX_00,paVar15,piVar10);
      LOCK();
      bVar7 = *(long *)(lVar3 + 0xe0) == 0;
      if (bVar7) {
        *(long *)(lVar3 + 0xe0) = (long)this_01;
      }
      UNLOCK();
      if (bVar7) break;
      OT::glyf_accelerator_t::~glyf_accelerator_t(this_01);
      free(this_01);
    }
    lVar5 = *(long *)(lVar3 + 0xe0);
  }
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x18);
  }
  (**(code **)(param_4 + 0x28))(param_4,param_5,param_3,param_1,uVar18);
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x30);
  }
  (**(code **)(param_4 + 0x40))(param_4,param_5,1,local_48,uVar18);
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00447bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x38))(param_4,param_5,uVar18);
  return;
}


