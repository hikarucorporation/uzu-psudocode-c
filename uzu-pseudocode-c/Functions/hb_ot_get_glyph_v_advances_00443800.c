// Function : hb_ot_get_glyph_v_advances
// Namespace: 
// Entry    : 00443800
// Prototype: undefined hb_ot_get_glyph_v_advances(long param_1, long * param_2, uint param_3, uint * param_4, ulong param_5, int * param_6, uint param_7)
// Body     : 00443800 - 004441dd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_glyph_v_advances(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned int,
   int*, unsigned int, void*) */

void __cdecl
hb_ot_get_glyph_v_advances
          (long param_1,long *param_2,uint param_3,uint *param_4,ulong param_5,int *param_6,
          uint param_7)

{
  undefined8 *puVar1;
  int *piVar2;
  hb_face_t *phVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  glyf_accelerator_t *this;
  accelerator_t *this_00;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  int iVar19;
  DeltaSetIndexMap *this_01;
  VarData *this_02;
  uint uVar20;
  ulong uVar21;
  VarRegionList *pVVar22;
  int *piVar23;
  uint uVar24;
  ushort uVar25;
  bool bVar26;
  float fVar27;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  puVar1 = (undefined8 *)*param_2;
  this_00 = (accelerator_t *)puVar1[0xc];
  uVar9 = param_5;
  while (this_00 == (accelerator_t *)0x0) {
    phVar3 = (hb_face_t *)*puVar1;
    if (phVar3 == (hb_face_t *)0x0) {
LAB_004440a9:
      this_00 = (accelerator_t *)&_hb_NullPool;
      break;
    }
    puVar11 = param_4;
    this_00 = calloc(1,0x28);
    if (this_00 == (accelerator_t *)0x0) {
      LOCK();
      bVar26 = puVar1[0xc] == 0;
      if (bVar26) {
        puVar1[0xc] = &_hb_NullPool;
      }
      UNLOCK();
      if (bVar26) goto LAB_004440a9;
    }
    else {
      OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
                (this_00,phVar3,extraout_RDX_00,puVar11,uVar9);
      LOCK();
      bVar26 = puVar1[0xc] == 0;
      if (bVar26) {
        puVar1[0xc] = this_00;
      }
      UNLOCK();
      if (bVar26) break;
      OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::~accelerator_t(this_00);
      free(this_00);
    }
    this_00 = (accelerator_t *)puVar1[0xc];
  }
  uVar12 = *(uint *)(this_00 + 4);
  if (uVar12 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x10);
    if (puVar1 == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar1;
    }
    iVar6 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x98),&local_98,uVar10);
    if (iVar6 == 0) {
      local_98._0_4_ = (int)((double)*(int *)(param_1 + 0x2c) * DAT_005de638);
      local_98._4_4_ = (int)local_98 - *(int *)(param_1 + 0x2c);
    }
    else {
    }
    if (param_3 != 0) {
      local_98._4_4_ = local_98._4_4_ - (int)local_98;
      uVar9 = (ulong)param_7;
      uVar12 = param_3 & 7;
      piVar23 = param_6;
      if (6 < param_3 - 1) {
        uVar20 = (param_3 - 8 >> 3) + 1;
        if (7 < param_3 - 8) {
          uVar24 = uVar20 & 0xfffffffe;
          do {
            *piVar23 = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9) = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 2) = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 3) = local_98._4_4_;
            piVar23[uVar9] = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 5) = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 6) = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 7) = local_98._4_4_;
            piVar23[uVar9 * 2] = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 9) = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 10) = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 0xb) = local_98._4_4_;
            piVar23[uVar9 * 3] = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 0xd) = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 0xe) = local_98._4_4_;
            *(int *)((long)piVar23 + uVar9 * 0xf) = local_98._4_4_;
            piVar23 = piVar23 + uVar9 * 4;
            uVar24 = uVar24 - 2;
          } while (uVar24 != 0);
        }
        if ((uVar20 & 1) != 0) {
          *piVar23 = local_98._4_4_;
          *(int *)((long)piVar23 + uVar9) = local_98._4_4_;
          *(int *)((long)piVar23 + uVar9 * 2) = local_98._4_4_;
          *(int *)((long)piVar23 + uVar9 * 3) = local_98._4_4_;
          piVar23[uVar9] = local_98._4_4_;
          *(int *)((long)piVar23 + uVar9 * 5) = local_98._4_4_;
          *(int *)((long)piVar23 + uVar9 * 6) = local_98._4_4_;
          *(int *)((long)piVar23 + uVar9 * 7) = local_98._4_4_;
          piVar23 = piVar23 + uVar9 * 2;
        }
      }
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        *piVar23 = local_98._4_4_;
        piVar23 = (int *)((long)piVar23 + uVar9);
      }
    }
    goto LAB_00444109;
  }
  puVar17 = *(undefined4 **)(this_00 + 0x20);
  puVar14 = &_hb_NullPool;
  if (puVar17 == (undefined4 *)0x0) {
    puVar17 = &_hb_NullPool;
  }
  puVar8 = &_hb_NullPool;
  if (0x17 < (uint)puVar17[6]) {
    puVar8 = *(undefined4 **)(puVar17 + 4);
  }
  uVar20 = puVar8[1];
  if (uVar20 != 0) {
    puVar14 = (undefined4 *)
              ((long)puVar8 +
              (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18));
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    local_a0 = (void *)0x0;
  }
  else {
    uVar20 = *(uint *)((long)puVar14 + 2);
    if (uVar20 == 0) {
      puVar14 = &_hb_NullPool;
    }
    else {
      puVar14 = (undefined4 *)
                ((long)puVar14 +
                (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                       uVar20 << 0x18));
    }
    uVar5 = *(ushort *)((long)puVar14 + 2);
    uVar25 = uVar5 << 8 | uVar5 >> 8;
    local_a0 = malloc((ulong)(uint)uVar25 << 2);
    uVar4 = _UNK_005de068;
    uVar10 = _DAT_005de060;
    if (local_a0 == (void *)0x0) {
      local_a0 = (void *)0x0;
    }
    else if (uVar5 != 0) {
      uVar20 = 1;
      if (1 < uVar25) {
        uVar20 = (uint)uVar25;
      }
      if ((ushort)uVar20 < 8) {
        uVar18 = 0;
      }
      else {
        uVar18 = (ulong)(uVar20 & 0xfff8);
        uVar9 = (uVar18 - 8 >> 3) + 1;
        uVar21 = (ulong)((uint)uVar9 & 7);
        if (uVar18 - 8 < 0x38) {
          lVar15 = 0;
        }
        else {
          uVar9 = uVar9 & 0xfffffffffffffff8;
          lVar15 = 0;
          do {
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x10);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x20);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x30);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x40);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x50);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x60);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x70);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x80);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0x90);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0xa0);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0xb0);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0xc0);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0xd0);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0xe0);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar15 * 4 + 0xf0);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            lVar15 = lVar15 + 0x40;
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0);
        }
        uVar4 = _UNK_005de068;
        uVar10 = _DAT_005de060;
        if (uVar21 != 0) {
          lVar16 = 0;
          do {
            puVar1 = (undefined8 *)((long)local_a0 + lVar16 + lVar15 * 4);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)((long)local_a0 + lVar16 + lVar15 * 4 + 0x10);
            *puVar1 = uVar10;
            puVar1[1] = uVar4;
            lVar16 = lVar16 + 0x20;
          } while (uVar21 * 0x20 != lVar16);
        }
        if (uVar18 == uVar20) goto joined_r0x00443942;
      }
      do {
        *(undefined4 *)((long)local_a0 + uVar18 * 4) = 0x40000000;
        uVar18 = uVar18 + 1;
      } while (uVar20 != uVar18);
    }
  }
joined_r0x00443942:
  if (param_3 != 0) {
    uVar24 = 0;
    uVar20 = *param_4;
    piVar23 = param_6;
    if (uVar12 <= uVar20) goto LAB_00443d50;
    do {
      puVar17 = *(undefined4 **)(this_00 + 0x18);
      if (puVar17 == (undefined4 *)0x0) {
        puVar17 = &_hb_NullPool;
      }
      uVar12 = *(int *)this_00 - 1U;
      if (uVar20 <= *(int *)this_00 - 1U) {
        uVar12 = uVar20;
      }
      uVar5 = *(ushort *)(*(long *)(puVar17 + 4) + (ulong)uVar12 * 4);
      uVar5 = uVar5 << 8 | uVar5 >> 8;
      uVar9 = (ulong)uVar5;
      uVar12 = *(uint *)(param_1 + 0x78);
      if (uVar12 != 0) {
        puVar17 = *(undefined4 **)(this_00 + 0x20);
        if (puVar17 == (undefined4 *)0x0) {
          puVar17 = &_hb_NullPool;
        }
        if (puVar17[6] == 0) {
          lVar15 = *(long *)(param_1 + 0x20);
          this = *(glyf_accelerator_t **)(lVar15 + 0xe0);
          while (this == (glyf_accelerator_t *)0x0) {
            puVar17 = &_hb_NullPool;
            phVar3 = *(hb_face_t **)(lVar15 + 0x68);
            if (phVar3 == (hb_face_t *)0x0) {
LAB_00443ffd:
              this = (glyf_accelerator_t *)&_hb_NullPool;
              break;
            }
            puVar11 = param_4;
            this = calloc(1,0x30);
            if (this == (glyf_accelerator_t *)0x0) {
              LOCK();
              bVar26 = *(long *)(lVar15 + 0xe0) == 0;
              if (bVar26) {
                *(long *)(lVar15 + 0xe0) = (long)&_hb_NullPool;
              }
              UNLOCK();
              if (bVar26) goto LAB_00443ffd;
            }
            else {
              OT::glyf_accelerator_t::glyf_accelerator_t(this,phVar3,extraout_RDX,puVar11,puVar17);
              LOCK();
              bVar26 = *(long *)(lVar15 + 0xe0) == 0;
              if (bVar26) {
                *(long *)(lVar15 + 0xe0) = (long)this;
              }
              UNLOCK();
              if (bVar26) break;
              OT::glyf_accelerator_t::~glyf_accelerator_t(this);
              free(this);
            }
            this = *(glyf_accelerator_t **)(lVar15 + 0xe0);
          }
          if (uVar20 < *(uint *)(this + 0x1c)) {
            if (*(int *)(param_1 + 0x78) != 0) {
              uStack_44 = (undefined4)_DAT_005de0e0;
              uStack_40 = (undefined4)((ulong)_DAT_005de0e0 >> 0x20);
              uStack_3c = (undefined4)_UNK_005de0e8;
              uStack_38 = (undefined4)((ulong)_UNK_005de0e8 >> 0x20);
              uStack_58 = 0;
              local_50 = &local_98;
              uStack_48 = uStack_48 & 0xffffff00;
              local_60 = param_1;
              uVar9 = OT::glyf_accelerator_t::
                      get_points<OT::glyf_accelerator_t::points_aggregator_t>
                                ((ushort *)this,param_1,uVar20);
              if ((char)uVar9 != '\0') {
                fVar27 = floorf((uStack_80._4_4_ - (float)uStack_70) + DAT_005d9044);
                fVar27 = (float)(-(uint)(0.0 <= fVar27) & (uint)fVar27);
                if (DAT_00653434 <= fVar27) {
                  fVar27 = DAT_00653434;
                }
                uVar9 = (ulong)fVar27;
                if ((int)uVar9 != 0) goto LAB_00443ee4;
                goto LAB_00443ee0;
              }
            }
            piVar2 = *(int **)(this + 0x10);
            if (uVar20 < (uint)piVar2[1]) {
              puVar17 = *(undefined4 **)(piVar2 + 6);
              if (puVar17 == (undefined4 *)0x0) {
                puVar17 = &_hb_NullPool;
              }
              uVar12 = *piVar2 - 1U;
              if (uVar20 <= *piVar2 - 1U) {
                uVar12 = uVar20;
              }
              uVar25 = *(ushort *)(*(long *)(puVar17 + 4) + (ulong)uVar12 * 4);
              uVar25 = uVar25 << 8 | uVar25 >> 8;
              uVar9 = (ulong)uVar25;
              if (uVar25 == 0) goto LAB_00443ee0;
            }
            else if ((piVar2[2] != 0) || (uVar9 = (ulong)(uint)piVar2[4], piVar2[4] == 0))
            goto LAB_00443ee0;
          }
          else {
LAB_00443ee0:
            uVar9 = (ulong)(uint)uVar5;
          }
        }
        else {
          puVar14 = &_hb_NullPool;
          if (0x17 < (uint)puVar17[6]) {
            puVar14 = *(undefined4 **)(puVar17 + 4);
          }
          uVar7 = puVar14[2];
          this_01 = (DeltaSetIndexMap *)&_hb_NullPool;
          if (uVar7 != 0) {
            this_01 = (DeltaSetIndexMap *)
                      ((ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                              uVar7 << 0x18) + (long)puVar14);
          }
          lVar15 = *(long *)(param_1 + 0x80);
          uVar7 = OT::DeltaSetIndexMap::map(this_01,uVar20);
          uVar20 = puVar14[1];
          puVar17 = &_hb_NullPool;
          if (uVar20 != 0) {
            puVar17 = (undefined4 *)
                      ((long)puVar14 +
                      (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                             uVar20 << 0x18));
          }
          fVar27 = DAT_005d9044;
          if (uVar7 >> 0x10 <
              (uint)(ushort)(*(ushort *)((long)puVar17 + 6) << 8 |
                            *(ushort *)((long)puVar17 + 6) >> 8)) {
            uVar20 = puVar17[(ulong)(uVar7 >> 0x10) + 2];
            this_02 = (VarData *)&_hb_NullPool;
            if (uVar20 != 0) {
              this_02 = (VarData *)
                        ((ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8
                                | uVar20 << 0x18) + (long)puVar17);
            }
            uVar20 = *(uint *)((long)puVar17 + 2);
            pVVar22 = (VarRegionList *)&_hb_NullPool;
            if (uVar20 != 0) {
              pVVar22 = (VarRegionList *)
                        ((long)puVar17 +
                        (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                               uVar20 << 0x18));
            }
            fVar27 = OT::VarData::get_delta
                               (this_02,uVar7 & 0xffff,lVar15,uVar12,pVVar22,(long)local_a0);
            fVar27 = fVar27 + DAT_005d9044;
          }
          fVar27 = floorf(fVar27);
          uVar9 = (ulong)(fVar27 + (float)uVar5);
        }
      }
LAB_00443ee4:
      while( true ) {
        *piVar23 = (int)((ulong)(((long)-(uVar9 << 0x30) >> 0x30) * *(long *)(param_1 + 0x60) +
                                0x8000) >> 0x10);
        uVar24 = uVar24 + 1;
        if (uVar24 == param_3) goto LAB_004440f0;
        piVar23 = (int *)((long)piVar23 + (ulong)param_7);
        param_4 = (uint *)((long)param_4 + (param_5 & 0xffffffff));
        uVar20 = *param_4;
        if (uVar20 < *(uint *)(this_00 + 4)) break;
LAB_00443d50:
        uVar9 = 0;
        if (*(int *)(this_00 + 8) == 0) {
          uVar9 = (ulong)*(uint *)(this_00 + 0x10);
        }
      }
    } while( true );
  }
LAB_004440f0:
  free(local_a0);
LAB_00444109:
  iVar6 = *(int *)(param_1 + 0x40);
  if ((iVar6 != 0) && (*(char *)(param_1 + 0x38) == '\0')) {
    iVar13 = -iVar6;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar13 = iVar6;
    }
    if (param_3 != 0) {
      uVar9 = (ulong)param_7;
      uVar12 = param_3 & 3;
      if (2 < param_3 - 1) {
        uVar20 = param_3 & 0xfffffffc;
        piVar23 = param_6;
        do {
          iVar6 = iVar13;
          if (*piVar23 == 0) {
            iVar6 = 0;
          }
          *piVar23 = iVar6 + *piVar23;
          iVar6 = iVar13;
          if (*(int *)((long)piVar23 + uVar9) == 0) {
            iVar6 = 0;
          }
          *(int *)((long)piVar23 + uVar9) = iVar6 + *(int *)((long)piVar23 + uVar9);
          iVar6 = *(int *)((long)piVar23 + uVar9 * 2);
          iVar19 = iVar13;
          if (iVar6 == 0) {
            iVar19 = 0;
          }
          *(int *)((long)piVar23 + uVar9 * 2) = iVar19 + iVar6;
          param_6 = piVar23 + uVar9;
          iVar6 = *(int *)((long)piVar23 + uVar9 * 3);
          iVar19 = iVar13;
          if (iVar6 == 0) {
            iVar19 = 0;
          }
          *(int *)((long)piVar23 + uVar9 * 3) = iVar19 + iVar6;
          uVar20 = uVar20 - 4;
          piVar23 = param_6;
        } while (uVar20 != 0);
      }
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        iVar6 = iVar13;
        if (*param_6 == 0) {
          iVar6 = 0;
        }
        *param_6 = iVar6 + *param_6;
        param_6 = (int *)((long)param_6 + uVar9);
      }
    }
  }
  return;
}


