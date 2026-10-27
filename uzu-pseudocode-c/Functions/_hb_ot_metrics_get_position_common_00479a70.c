// Function : _hb_ot_metrics_get_position_common
// Namespace: 
// Entry    : 00479a70
// Prototype: undefined8 _hb_ot_metrics_get_position_common(long param_1, undefined8 param_2, int * param_3, undefined8 param_4, undefined8 param_5)
// Body     : 00479a70 - 0047a6fa


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_ot_metrics_get_position_common(hb_font_t*, hb_ot_metrics_tag_t, int*) */

undefined8 __cdecl
_hb_ot_metrics_get_position_common
          (long param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t> *phVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  short *psVar6;
  uint uVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  VarData *pVVar11;
  VarRegionList *pVVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float local_24;
  
  lVar14 = *(long *)(param_1 + 0x20);
  iVar13 = (int)param_2;
  if (iVar13 < 0x76617363) {
    if (iVar13 == 0x68617363) {
      phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                *)(lVar14 + 0x98);
      puVar5 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
               ::get(phVar1);
      if ((*(short *)((long)puVar5 + 0x3e) < 0) &&
         ((((psVar6 = (short *)hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                               ::get(phVar1), psVar6[2] != 0 || (psVar6[3] != 0)) ||
           (psVar6[0x20] != 0)) || (psVar6[0x21] != 0)))) {
        if (param_3 == (int *)0x0) goto LAB_0047a681;
        puVar5 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                 ::get(phVar1);
        local_24 = (float)(int)(short)(*(ushort *)(puVar5 + 0x11) << 8 |
                                      *(ushort *)(puVar5 + 0x11) >> 8);
        puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                        *)(lVar14 + 0x118),param_2,extraout_RDX_06,param_4,param_5);
        uVar2 = *(ushort *)(puVar5 + 2);
        fVar16 = 0.0;
        if (uVar2 != 0) {
          lVar14 = *(long *)(param_1 + 0x80);
          uVar7 = *(uint *)(param_1 + 0x78);
          iVar13 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
          iVar10 = 0;
          do {
            while( true ) {
              uVar9 = (uint)(iVar13 + iVar10) >> 1;
              lVar15 = (ulong)uVar9 *
                       (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                      *(ushort *)((long)puVar5 + 6) >> 8);
              uVar4 = *(uint *)((long)puVar5 + lVar15 + 0xc);
              if (0x68617363 <
                  (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18))
              break;
              if (uVar4 == 0x63736168) {
                uVar2 = *(ushort *)((long)puVar5 + 10);
                if (uVar2 == 0) {
                  puVar8 = &_hb_NullPool;
                }
                else {
                  puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
                }
                uVar4 = *(uint *)((long)puVar5 + lVar15 + 0x10);
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
                uVar9 = uVar4 >> 0x10;
                if (uVar9 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                    *(ushort *)((long)puVar8 + 6) >> 8)) {
LAB_0047a592:
                  uVar9 = puVar8[(ulong)uVar9 + 2];
                  pVVar12 = (VarRegionList *)&_hb_NullPool;
                  pVVar11 = (VarData *)&_hb_NullPool;
                  if (uVar9 != 0) {
                    pVVar11 = (VarData *)
                              ((ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                       (uVar9 & 0xff00) << 8 | uVar9 << 0x18) + (long)puVar8);
                  }
                  uVar9 = *(uint *)((long)puVar8 + 2);
                  if (uVar9 != 0) {
                    pVVar12 = (VarRegionList *)
                              ((long)puVar8 +
                              (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                      (uVar9 & 0xff00) << 8 | uVar9 << 0x18));
                  }
                  fVar16 = OT::VarData::get_delta(pVVar11,uVar4 & 0xffff,lVar14,uVar7,pVVar12,0);
                }
                goto LAB_0047a5c8;
              }
              iVar10 = uVar9 + 1;
              if (iVar13 < iVar10) goto LAB_0047a5c8;
            }
            iVar13 = uVar9 - 1;
          } while (iVar10 <= iVar13);
        }
      }
      else {
        psVar6 = (short *)hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                          ::get((hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                                 *)(lVar14 + 0x88));
        if (*psVar6 == 0) {
          return 0;
        }
        if (param_3 == (int *)0x0) goto LAB_0047a681;
        puVar5 = hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                        *)(lVar14 + 0x88));
        local_24 = (float)(int)(short)(*(ushort *)(puVar5 + 1) << 8 | *(ushort *)(puVar5 + 1) >> 8);
        puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                        *)(lVar14 + 0x118),param_2,extraout_RDX_01,param_4,param_5);
        uVar2 = *(ushort *)(puVar5 + 2);
        fVar16 = 0.0;
        if (uVar2 != 0) {
          lVar14 = *(long *)(param_1 + 0x80);
          uVar7 = *(uint *)(param_1 + 0x78);
          iVar13 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
          iVar10 = 0;
          do {
            while( true ) {
              uVar9 = (uint)(iVar13 + iVar10) >> 1;
              lVar15 = (ulong)uVar9 *
                       (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                      *(ushort *)((long)puVar5 + 6) >> 8);
              uVar4 = *(uint *)((long)puVar5 + lVar15 + 0xc);
              if (0x68617363 <
                  (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18))
              break;
              if (uVar4 == 0x63736168) {
                uVar2 = *(ushort *)((long)puVar5 + 10);
                if (uVar2 == 0) {
                  puVar8 = &_hb_NullPool;
                }
                else {
                  puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
                }
                uVar4 = *(uint *)((long)puVar5 + lVar15 + 0x10);
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
                uVar9 = uVar4 >> 0x10;
                if (uVar9 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                    *(ushort *)((long)puVar8 + 6) >> 8)) goto LAB_0047a592;
                goto LAB_0047a5c8;
              }
              iVar10 = uVar9 + 1;
              if (iVar13 < iVar10) goto LAB_0047a5c8;
            }
            iVar13 = uVar9 - 1;
          } while (iVar10 <= iVar13);
        }
      }
LAB_0047a5c8:
      fVar16 = (float)((uint)(fVar16 + local_24) & _DAT_005d91c0);
LAB_0047a5d5:
      fVar16 = fVar16 * *(float *)(param_1 + 0x50);
      goto LAB_0047a5db;
    }
    if (iVar13 != 0x68647363) {
      if (iVar13 != 0x686c6770) {
        return 0;
      }
      phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                *)(lVar14 + 0x98);
      puVar5 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
               ::get(phVar1);
      if ((*(short *)((long)puVar5 + 0x3e) < 0) &&
         (((psVar6 = (short *)hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                              ::get(phVar1), psVar6[2] != 0 || (psVar6[3] != 0)) ||
          ((psVar6[0x20] != 0 || (psVar6[0x21] != 0)))))) {
        if (param_3 == (int *)0x0) goto LAB_0047a681;
        puVar5 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                 ::get(phVar1);
        local_24 = (float)(int)(short)(*(ushort *)(puVar5 + 0x12) << 8 |
                                      *(ushort *)(puVar5 + 0x12) >> 8);
        puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                        *)(lVar14 + 0x118),param_2,extraout_RDX_05,param_4,param_5);
        uVar2 = *(ushort *)(puVar5 + 2);
        fVar16 = 0.0;
        if (uVar2 != 0) {
          lVar14 = *(long *)(param_1 + 0x80);
          uVar7 = *(uint *)(param_1 + 0x78);
          iVar13 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
          iVar10 = 0;
          do {
            while( true ) {
              uVar9 = (uint)(iVar13 + iVar10) >> 1;
              lVar15 = (ulong)uVar9 *
                       (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                      *(ushort *)((long)puVar5 + 6) >> 8);
              uVar4 = *(uint *)((long)puVar5 + lVar15 + 0xc);
              if (0x686c6770 <
                  (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18))
              break;
              if (uVar4 == 0x70676c68) {
                uVar2 = *(ushort *)((long)puVar5 + 10);
                if (uVar2 == 0) {
                  puVar8 = &_hb_NullPool;
                }
                else {
                  puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
                }
                uVar4 = *(uint *)((long)puVar5 + lVar15 + 0x10);
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
                uVar9 = uVar4 >> 0x10;
                if (uVar9 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                    *(ushort *)((long)puVar8 + 6) >> 8)) {
LAB_0047a51f:
                  uVar9 = puVar8[(ulong)uVar9 + 2];
                  pVVar12 = (VarRegionList *)&_hb_NullPool;
                  pVVar11 = (VarData *)&_hb_NullPool;
                  if (uVar9 != 0) {
                    pVVar11 = (VarData *)
                              ((ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                       (uVar9 & 0xff00) << 8 | uVar9 << 0x18) + (long)puVar8);
                  }
                  uVar9 = *(uint *)((long)puVar8 + 2);
                  if (uVar9 != 0) {
                    pVVar12 = (VarRegionList *)
                              ((long)puVar8 +
                              (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                      (uVar9 & 0xff00) << 8 | uVar9 << 0x18));
                  }
                  fVar16 = OT::VarData::get_delta(pVVar11,uVar4 & 0xffff,lVar14,uVar7,pVVar12,0);
                }
                goto LAB_0047a555;
              }
              iVar10 = uVar9 + 1;
              if (iVar13 < iVar10) goto LAB_0047a555;
            }
            iVar13 = uVar9 - 1;
          } while (iVar10 <= iVar13);
        }
      }
      else {
        psVar6 = (short *)hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                          ::get((hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                                 *)(lVar14 + 0x88));
        if (*psVar6 == 0) {
          return 0;
        }
        if (param_3 == (int *)0x0) goto LAB_0047a681;
        puVar5 = hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                        *)(lVar14 + 0x88));
        local_24 = (float)(int)(short)(*(ushort *)(puVar5 + 2) << 8 | *(ushort *)(puVar5 + 2) >> 8);
        puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                        *)(lVar14 + 0x118),param_2,extraout_RDX,param_4,param_5);
        uVar2 = *(ushort *)(puVar5 + 2);
        fVar16 = 0.0;
        if (uVar2 != 0) {
          lVar14 = *(long *)(param_1 + 0x80);
          uVar7 = *(uint *)(param_1 + 0x78);
          iVar13 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
          iVar10 = 0;
          do {
            while( true ) {
              uVar9 = (uint)(iVar13 + iVar10) >> 1;
              lVar15 = (ulong)uVar9 *
                       (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                      *(ushort *)((long)puVar5 + 6) >> 8);
              uVar4 = *(uint *)((long)puVar5 + lVar15 + 0xc);
              if (0x686c6770 <
                  (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18))
              break;
              if (uVar4 == 0x70676c68) {
                uVar2 = *(ushort *)((long)puVar5 + 10);
                if (uVar2 == 0) {
                  puVar8 = &_hb_NullPool;
                }
                else {
                  puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
                }
                uVar4 = *(uint *)((long)puVar5 + lVar15 + 0x10);
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
                uVar9 = uVar4 >> 0x10;
                if (uVar9 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                    *(ushort *)((long)puVar8 + 6) >> 8)) goto LAB_0047a51f;
                goto LAB_0047a555;
              }
              iVar10 = uVar9 + 1;
              if (iVar13 < iVar10) goto LAB_0047a555;
            }
            iVar13 = uVar9 - 1;
          } while (iVar10 <= iVar13);
        }
      }
LAB_0047a555:
      fVar16 = fVar16 + local_24;
      goto LAB_0047a5d5;
    }
    phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
              *)(lVar14 + 0x98);
    puVar5 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
             ::get(phVar1);
    if ((*(short *)((long)puVar5 + 0x3e) < 0) &&
       (((psVar6 = (short *)hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                            ::get(phVar1), psVar6[2] != 0 || (psVar6[3] != 0)) ||
        ((psVar6[0x20] != 0 || (psVar6[0x21] != 0)))))) {
      if (param_3 == (int *)0x0) goto LAB_0047a681;
      puVar5 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
               ::get(phVar1);
      local_24 = (float)(int)(short)(*(ushort *)((long)puVar5 + 0x46) << 8 |
                                    *(ushort *)((long)puVar5 + 0x46) >> 8);
      puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
               ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                      *)(lVar14 + 0x118),param_2,extraout_RDX_07,param_4,param_5);
      uVar2 = *(ushort *)(puVar5 + 2);
      fVar16 = 0.0;
      if (uVar2 != 0) {
        lVar14 = *(long *)(param_1 + 0x80);
        uVar7 = *(uint *)(param_1 + 0x78);
        iVar13 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
        iVar10 = 0;
        do {
          while( true ) {
            uVar9 = (uint)(iVar13 + iVar10) >> 1;
            lVar15 = (ulong)uVar9 *
                     (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                    *(ushort *)((long)puVar5 + 6) >> 8);
            uVar4 = *(uint *)((long)puVar5 + lVar15 + 0xc);
            if (0x68647363 <
                (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18))
            break;
            if (uVar4 == 0x63736468) {
              uVar2 = *(ushort *)((long)puVar5 + 10);
              if (uVar2 == 0) {
                puVar8 = &_hb_NullPool;
              }
              else {
                puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
              }
              uVar4 = *(uint *)((long)puVar5 + lVar15 + 0x10);
              uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                      uVar4 << 0x18;
              uVar9 = uVar4 >> 0x10;
              if (uVar9 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                  *(ushort *)((long)puVar8 + 6) >> 8)) {
LAB_0047a61d:
                uVar9 = puVar8[(ulong)uVar9 + 2];
                pVVar12 = (VarRegionList *)&_hb_NullPool;
                pVVar11 = (VarData *)&_hb_NullPool;
                if (uVar9 != 0) {
                  pVVar11 = (VarData *)
                            ((ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8
                                    | uVar9 << 0x18) + (long)puVar8);
                }
                uVar9 = *(uint *)((long)puVar8 + 2);
                if (uVar9 != 0) {
                  pVVar12 = (VarRegionList *)
                            ((long)puVar8 +
                            (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8
                                   | uVar9 << 0x18));
                }
                fVar16 = OT::VarData::get_delta(pVVar11,uVar4 & 0xffff,lVar14,uVar7,pVVar12,0);
              }
              goto LAB_0047a656;
            }
            iVar10 = uVar9 + 1;
            if (iVar13 < iVar10) goto LAB_0047a656;
          }
          iVar13 = uVar9 - 1;
        } while (iVar10 <= iVar13);
      }
    }
    else {
      psVar6 = (short *)hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                        ::get((hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                               *)(lVar14 + 0x88));
      if (*psVar6 == 0) {
        return 0;
      }
      if (param_3 == (int *)0x0) goto LAB_0047a681;
      puVar5 = hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
               ::get((hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                      *)(lVar14 + 0x88));
      local_24 = (float)(int)(short)(*(ushort *)((long)puVar5 + 6) << 8 |
                                    *(ushort *)((long)puVar5 + 6) >> 8);
      puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
               ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                      *)(lVar14 + 0x118),param_2,extraout_RDX_02,param_4,param_5);
      uVar2 = *(ushort *)(puVar5 + 2);
      fVar16 = 0.0;
      if (uVar2 != 0) {
        lVar14 = *(long *)(param_1 + 0x80);
        uVar7 = *(uint *)(param_1 + 0x78);
        iVar13 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
        iVar10 = 0;
        do {
          while( true ) {
            uVar9 = (uint)(iVar13 + iVar10) >> 1;
            lVar15 = (ulong)uVar9 *
                     (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                    *(ushort *)((long)puVar5 + 6) >> 8);
            uVar4 = *(uint *)((long)puVar5 + lVar15 + 0xc);
            if (0x68647363 <
                (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18))
            break;
            if (uVar4 == 0x63736468) {
              uVar2 = *(ushort *)((long)puVar5 + 10);
              if (uVar2 == 0) {
                puVar8 = &_hb_NullPool;
              }
              else {
                puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
              }
              uVar4 = *(uint *)((long)puVar5 + lVar15 + 0x10);
              uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                      uVar4 << 0x18;
              uVar9 = uVar4 >> 0x10;
              if (uVar9 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                  *(ushort *)((long)puVar8 + 6) >> 8)) goto LAB_0047a61d;
              goto LAB_0047a656;
            }
            iVar10 = uVar9 + 1;
            if (iVar13 < iVar10) goto LAB_0047a656;
          }
          iVar13 = uVar9 - 1;
        } while (iVar10 <= iVar13);
      }
    }
LAB_0047a656:
    fVar16 = (float)((uint)(fVar16 + local_24) & _DAT_005d91c0) * *(float *)(param_1 + 0x50);
LAB_0047a669:
    fVar16 = DAT_005d9044 - fVar16;
  }
  else {
    if (iVar13 == 0x76617363) {
      psVar6 = (short *)hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                        ::get((hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                               *)(lVar14 + 0xc0));
      if (*psVar6 == 0) {
        return 0;
      }
      if (param_3 == (int *)0x0) goto LAB_0047a681;
      puVar5 = hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
               ::get((hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                      *)(lVar14 + 0xc0));
      uVar2 = *(ushort *)(puVar5 + 1);
      puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
               ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                      *)(lVar14 + 0x118),param_2,extraout_RDX_03,param_4,param_5);
      uVar3 = *(ushort *)(puVar5 + 2);
      fVar16 = 0.0;
      if (uVar3 != 0) {
        iVar13 = (ushort)(uVar3 << 8 | uVar3 >> 8) - 1;
        iVar10 = 0;
        do {
          while( true ) {
            uVar4 = (uint)(iVar13 + iVar10) >> 1;
            lVar14 = (ulong)uVar4 *
                     (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                    *(ushort *)((long)puVar5 + 6) >> 8);
            uVar7 = *(uint *)((long)puVar5 + lVar14 + 0xc);
            if (0x76617363 <
                (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18))
            break;
            if (uVar7 == 0x63736176) {
              uVar3 = *(ushort *)((long)puVar5 + 10);
              if (uVar3 == 0) {
                puVar8 = &_hb_NullPool;
              }
              else {
                puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8));
              }
              uVar7 = *(uint *)((long)puVar5 + lVar14 + 0x10);
              uVar4 = ((uVar7 & 0xff00) << 8 | uVar7 << 0x18) >> 0x10;
              if (uVar4 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                  *(ushort *)((long)puVar8 + 6) >> 8)) {
                uVar4 = puVar8[(ulong)uVar4 + 2];
                pVVar12 = (VarRegionList *)&_hb_NullPool;
                pVVar11 = (VarData *)&_hb_NullPool;
                if (uVar4 != 0) {
                  pVVar11 = (VarData *)
                            ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                    | uVar4 << 0x18) + (long)puVar8);
                }
                uVar4 = *(uint *)((long)puVar8 + 2);
                if (uVar4 != 0) {
                  pVVar12 = (VarRegionList *)
                            ((long)puVar8 +
                            (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18));
                }
                fVar16 = OT::VarData::get_delta
                                   (pVVar11,uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8,
                                    *(long *)(param_1 + 0x80),*(uint *)(param_1 + 0x78),pVVar12,0);
              }
              goto LAB_0047a392;
            }
            iVar10 = uVar4 + 1;
            if (iVar13 < iVar10) goto LAB_0047a392;
          }
          iVar13 = uVar4 - 1;
        } while (iVar10 <= iVar13);
      }
LAB_0047a392:
      fVar16 = (float)((uint)(fVar16 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) & _DAT_005d91c0
                      );
    }
    else {
      if (iVar13 == 0x76647363) {
        psVar6 = (short *)hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                          ::get((hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                                 *)(lVar14 + 0xc0));
        if (*psVar6 == 0) {
          return 0;
        }
        if (param_3 == (int *)0x0) goto LAB_0047a681;
        puVar5 = hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                        *)(lVar14 + 0xc0));
        uVar2 = *(ushort *)((long)puVar5 + 6);
        puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                        *)(lVar14 + 0x118),param_2,extraout_RDX_04,param_4,param_5);
        uVar3 = *(ushort *)(puVar5 + 2);
        fVar16 = 0.0;
        if (uVar3 != 0) {
          iVar13 = (ushort)(uVar3 << 8 | uVar3 >> 8) - 1;
          iVar10 = 0;
          do {
            while( true ) {
              uVar4 = (uint)(iVar13 + iVar10) >> 1;
              lVar14 = (ulong)uVar4 *
                       (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                      *(ushort *)((long)puVar5 + 6) >> 8);
              uVar7 = *(uint *)((long)puVar5 + lVar14 + 0xc);
              if (0x76647363 <
                  (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18))
              break;
              if (uVar7 == 0x63736476) {
                uVar3 = *(ushort *)((long)puVar5 + 10);
                if (uVar3 == 0) {
                  puVar8 = &_hb_NullPool;
                }
                else {
                  puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8));
                }
                uVar7 = *(uint *)((long)puVar5 + lVar14 + 0x10);
                uVar4 = ((uVar7 & 0xff00) << 8 | uVar7 << 0x18) >> 0x10;
                if (uVar4 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                    *(ushort *)((long)puVar8 + 6) >> 8)) {
                  uVar4 = puVar8[(ulong)uVar4 + 2];
                  pVVar12 = (VarRegionList *)&_hb_NullPool;
                  pVVar11 = (VarData *)&_hb_NullPool;
                  if (uVar4 != 0) {
                    pVVar11 = (VarData *)
                              ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                       (uVar4 & 0xff00) << 8 | uVar4 << 0x18) + (long)puVar8);
                  }
                  uVar4 = *(uint *)((long)puVar8 + 2);
                  if (uVar4 != 0) {
                    pVVar12 = (VarRegionList *)
                              ((long)puVar8 +
                              (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                      (uVar4 & 0xff00) << 8 | uVar4 << 0x18));
                  }
                  fVar16 = OT::VarData::get_delta
                                     (pVVar11,uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8,
                                      *(long *)(param_1 + 0x80),*(uint *)(param_1 + 0x78),pVVar12,0)
                  ;
                }
                goto LAB_0047a418;
              }
              iVar10 = uVar4 + 1;
              if (iVar13 < iVar10) goto LAB_0047a418;
            }
            iVar13 = uVar4 - 1;
          } while (iVar10 <= iVar13);
        }
LAB_0047a418:
        fVar16 = (float)((uint)(fVar16 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) &
                        _DAT_005d91c0) * *(float *)(param_1 + 0x4c);
        goto LAB_0047a669;
      }
      if (iVar13 != 0x766c6770) {
        return 0;
      }
      psVar6 = (short *)hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                        ::get((hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                               *)(lVar14 + 0xc0));
      if (*psVar6 == 0) {
        return 0;
      }
      if (param_3 == (int *)0x0) goto LAB_0047a681;
      puVar5 = hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
               ::get((hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                      *)(lVar14 + 0xc0));
      uVar2 = *(ushort *)(puVar5 + 2);
      puVar5 = hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
               ::get((hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>
                      *)(lVar14 + 0x118),param_2,extraout_RDX_00,param_4,param_5);
      uVar3 = *(ushort *)(puVar5 + 2);
      fVar16 = 0.0;
      if (uVar3 != 0) {
        iVar13 = (ushort)(uVar3 << 8 | uVar3 >> 8) - 1;
        iVar10 = 0;
        do {
          while( true ) {
            uVar4 = (uint)(iVar13 + iVar10) >> 1;
            lVar14 = (ulong)uVar4 *
                     (ulong)(ushort)(*(ushort *)((long)puVar5 + 6) << 8 |
                                    *(ushort *)((long)puVar5 + 6) >> 8);
            uVar7 = *(uint *)((long)puVar5 + lVar14 + 0xc);
            if (0x766c6770 <
                (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18))
            break;
            if (uVar7 == 0x70676c76) {
              uVar3 = *(ushort *)((long)puVar5 + 10);
              if (uVar3 == 0) {
                puVar8 = &_hb_NullPool;
              }
              else {
                puVar8 = (undefined4 *)((long)puVar5 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8));
              }
              uVar7 = *(uint *)((long)puVar5 + lVar14 + 0x10);
              uVar4 = ((uVar7 & 0xff00) << 8 | uVar7 << 0x18) >> 0x10;
              if (uVar4 < (ushort)(*(ushort *)((long)puVar8 + 6) << 8 |
                                  *(ushort *)((long)puVar8 + 6) >> 8)) {
                uVar4 = puVar8[(ulong)uVar4 + 2];
                pVVar12 = (VarRegionList *)&_hb_NullPool;
                pVVar11 = (VarData *)&_hb_NullPool;
                if (uVar4 != 0) {
                  pVVar11 = (VarData *)
                            ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                    | uVar4 << 0x18) + (long)puVar8);
                }
                uVar4 = *(uint *)((long)puVar8 + 2);
                if (uVar4 != 0) {
                  pVVar12 = (VarRegionList *)
                            ((long)puVar8 +
                            (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18));
                }
                fVar16 = OT::VarData::get_delta
                                   (pVVar11,uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8,
                                    *(long *)(param_1 + 0x80),*(uint *)(param_1 + 0x78),pVVar12,0);
              }
              goto LAB_0047a31f;
            }
            iVar10 = uVar4 + 1;
            if (iVar13 < iVar10) goto LAB_0047a31f;
          }
          iVar13 = uVar4 - 1;
        } while (iVar10 <= iVar13);
      }
LAB_0047a31f:
      fVar16 = fVar16 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8);
    }
    fVar16 = fVar16 * *(float *)(param_1 + 0x4c);
LAB_0047a5db:
    fVar16 = fVar16 + DAT_005d9044;
  }
  fVar16 = floorf(fVar16);
  psVar6 = (short *)(ulong)(uint)(int)fVar16;
  *param_3 = (int)fVar16;
LAB_0047a681:
  return CONCAT71((int7)((ulong)psVar6 >> 8),1);
}


