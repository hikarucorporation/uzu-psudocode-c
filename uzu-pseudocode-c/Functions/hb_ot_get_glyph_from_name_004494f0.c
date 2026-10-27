// Function : hb_ot_get_glyph_from_name
// Namespace: 
// Entry    : 004494f0
// Prototype: undefined8 hb_ot_get_glyph_from_name(undefined8 param_1, long * param_2, char * param_3, ulong param_4, uint * param_5)
// Body     : 004494f0 - 00449de3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_glyph_from_name(hb_font_t*, void*, char const*, int, unsigned int*, void*) */

undefined8 __cdecl
hb_ot_get_glyph_from_name
          (undefined8 param_1,long *param_2,char *param_3,ulong param_4,uint *param_5)

{
  ushort *puVar1;
  undefined8 *puVar2;
  hb_face_t *phVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  ushort uVar68;
  int iVar69;
  int iVar70;
  uint uVar71;
  size_t sVar72;
  accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar73;
  undefined1 *puVar74;
  accelerator_t *this;
  ulong uVar75;
  ushort *__ptr;
  long lVar76;
  undefined1 (*__ptr_00) [16];
  ulong uVar77;
  void *pvVar78;
  ulong uVar79;
  long lVar80;
  uint uVar81;
  ulong uVar82;
  char *__s2;
  int iVar83;
  uint uVar84;
  int iVar85;
  uint uVar86;
  ulong uVar87;
  bool bVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar91;
  ushort uVar92;
  ushort uVar93;
  ushort uVar94;
  ushort uVar95;
  undefined1 auVar96 [16];
  undefined4 local_66;
  undefined2 local_62;
  undefined8 local_38;
  
  puVar2 = (undefined8 *)*param_2;
  this = (accelerator_t *)puVar2[7];
  while (this == (accelerator_t *)0x0) {
    phVar3 = (hb_face_t *)*puVar2;
    if (phVar3 == (hb_face_t *)0x0) {
LAB_004498fc:
      this = (accelerator_t *)&_hb_NullPool;
      break;
    }
    this = calloc(1,0x38);
    if (this == (accelerator_t *)0x0) {
      LOCK();
      bVar88 = puVar2[7] == 0;
      if (bVar88) {
        puVar2[7] = &_hb_NullPool;
      }
      UNLOCK();
      if (bVar88) goto LAB_004498fc;
    }
    else {
      OT::post::accelerator_t::accelerator_t(this,phVar3);
      LOCK();
      bVar88 = puVar2[7] == 0;
      if (bVar88) {
        puVar2[7] = this;
      }
      UNLOCK();
      if (bVar88) break;
      OT::post::accelerator_t::~accelerator_t(this);
      free(this);
    }
    this = (accelerator_t *)puVar2[7];
  }
  uVar71 = (uint)param_4;
  if (*(int *)(this + 8) == 0x20000) {
    uVar68 = **(ushort **)(this + 0x10);
    if (uVar68 != 0) {
      uVar68 = uVar68 << 8 | uVar68 >> 8;
      uVar81 = (uint)uVar68;
      uVar84 = (uint)uVar68;
      goto joined_r0x00449772;
    }
  }
  else if (*(int *)(this + 8) == 0x10000) {
    uVar81 = 0x102;
    uVar84 = 0x102;
joined_r0x00449772:
    uVar86 = uVar71;
    if ((int)uVar71 < 0) {
      sVar72 = strlen(param_3);
      uVar86 = (uint)sVar72;
      uVar84 = uVar81;
    }
    if (uVar86 != 0) {
      __ptr = *(ushort **)(this + 0x30);
      if (__ptr == (ushort *)0x0) {
        uVar77 = (ulong)uVar84;
        if (uVar84 == 0) {
          do {
            __ptr = malloc(0);
            if (__ptr == (ushort *)0x0) goto LAB_00449667;
            sort_r_simple<void*>(__ptr,0,(long)this);
            LOCK();
            bVar88 = *(long *)(this + 0x30) == 0;
            if (bVar88) {
              *(ushort **)(this + 0x30) = __ptr;
            }
            UNLOCK();
            if (bVar88) break;
            free(__ptr);
            __ptr = *(ushort **)(this + 0x30);
          } while (__ptr == (ushort *)0x0);
        }
        else {
          uVar82 = (ulong)(uVar84 & 0xfffffff8);
          uVar75 = (uVar82 - 8 >> 3) + 1;
          uVar87 = (ulong)((uint)uVar75 & 7);
          do {
            __ptr = malloc(uVar77 * 2);
            sVar67 = _UNK_005de19e;
            sVar66 = _UNK_005de19c;
            sVar65 = _UNK_005de19a;
            sVar64 = _UNK_005de198;
            sVar63 = _UNK_005de196;
            sVar62 = _UNK_005de194;
            sVar61 = _UNK_005de192;
            sVar60 = _DAT_005de190;
            sVar59 = _UNK_005de18e;
            sVar58 = _UNK_005de18c;
            sVar57 = _UNK_005de18a;
            sVar56 = _UNK_005de188;
            sVar55 = _UNK_005de186;
            sVar54 = _UNK_005de184;
            sVar53 = _UNK_005de182;
            sVar52 = _DAT_005de180;
            sVar51 = _UNK_005de17e;
            sVar50 = _UNK_005de17c;
            sVar49 = _UNK_005de17a;
            sVar48 = _UNK_005de178;
            sVar47 = _UNK_005de176;
            sVar46 = _UNK_005de174;
            sVar45 = _UNK_005de172;
            sVar44 = _DAT_005de170;
            sVar43 = _UNK_005de16e;
            sVar42 = _UNK_005de16c;
            sVar41 = _UNK_005de16a;
            sVar40 = _UNK_005de168;
            sVar39 = _UNK_005de166;
            sVar38 = _UNK_005de164;
            sVar37 = _UNK_005de162;
            sVar36 = _DAT_005de160;
            sVar35 = _UNK_005de15e;
            sVar34 = _UNK_005de15c;
            sVar33 = _UNK_005de15a;
            sVar32 = _UNK_005de158;
            sVar31 = _UNK_005de156;
            sVar30 = _UNK_005de154;
            sVar29 = _UNK_005de152;
            sVar28 = _DAT_005de150;
            sVar27 = _UNK_005de14e;
            sVar26 = _UNK_005de14c;
            sVar25 = _UNK_005de14a;
            sVar24 = _UNK_005de148;
            sVar23 = _UNK_005de146;
            sVar22 = _UNK_005de144;
            sVar21 = _UNK_005de142;
            sVar20 = _DAT_005de140;
            sVar19 = _UNK_005de13e;
            sVar18 = _UNK_005de13c;
            sVar17 = _UNK_005de13a;
            sVar16 = _UNK_005de138;
            sVar15 = _UNK_005de136;
            sVar14 = _UNK_005de134;
            sVar13 = _UNK_005de132;
            sVar12 = _DAT_005de130;
            sVar11 = _UNK_005de12e;
            sVar10 = _UNK_005de12c;
            sVar9 = _UNK_005de12a;
            sVar8 = _UNK_005de128;
            sVar7 = _UNK_005de126;
            sVar6 = _UNK_005de124;
            sVar5 = _UNK_005de122;
            sVar4 = _DAT_005de120;
            if (__ptr == (ushort *)0x0) goto LAB_00449667;
            if (7 < uVar84) {
              uVar68 = _DAT_005de110;
              uVar89 = _UNK_005de112;
              uVar90 = _UNK_005de114;
              uVar91 = _UNK_005de116;
              uVar92 = _UNK_005de118;
              uVar93 = _UNK_005de11a;
              uVar94 = _UNK_005de11c;
              uVar95 = _UNK_005de11e;
              if (uVar82 - 8 < 0x38) {
                lVar76 = 0;
              }
              else {
                lVar76 = 0;
                uVar79 = uVar75 & 0xfffffffffffffff8;
                do {
                  puVar1 = __ptr + lVar76;
                  *puVar1 = uVar68;
                  puVar1[1] = uVar89;
                  puVar1[2] = uVar90;
                  puVar1[3] = uVar91;
                  puVar1[4] = uVar92;
                  puVar1[5] = uVar93;
                  puVar1[6] = uVar94;
                  puVar1[7] = uVar95;
                  puVar1 = __ptr + lVar76 + 8;
                  *puVar1 = uVar68 + sVar4;
                  puVar1[1] = uVar89 + sVar5;
                  puVar1[2] = uVar90 + sVar6;
                  puVar1[3] = uVar91 + sVar7;
                  puVar1[4] = uVar92 + sVar8;
                  puVar1[5] = uVar93 + sVar9;
                  puVar1[6] = uVar94 + sVar10;
                  puVar1[7] = uVar95 + sVar11;
                  puVar1 = __ptr + lVar76 + 0x10;
                  *puVar1 = uVar68 + sVar12;
                  puVar1[1] = uVar89 + sVar13;
                  puVar1[2] = uVar90 + sVar14;
                  puVar1[3] = uVar91 + sVar15;
                  puVar1[4] = uVar92 + sVar16;
                  puVar1[5] = uVar93 + sVar17;
                  puVar1[6] = uVar94 + sVar18;
                  puVar1[7] = uVar95 + sVar19;
                  puVar1 = __ptr + lVar76 + 0x18;
                  *puVar1 = uVar68 + sVar20;
                  puVar1[1] = uVar89 + sVar21;
                  puVar1[2] = uVar90 + sVar22;
                  puVar1[3] = uVar91 + sVar23;
                  puVar1[4] = uVar92 + sVar24;
                  puVar1[5] = uVar93 + sVar25;
                  puVar1[6] = uVar94 + sVar26;
                  puVar1[7] = uVar95 + sVar27;
                  puVar1 = __ptr + lVar76 + 0x20;
                  *puVar1 = uVar68 + sVar28;
                  puVar1[1] = uVar89 + sVar29;
                  puVar1[2] = uVar90 + sVar30;
                  puVar1[3] = uVar91 + sVar31;
                  puVar1[4] = uVar92 + sVar32;
                  puVar1[5] = uVar93 + sVar33;
                  puVar1[6] = uVar94 + sVar34;
                  puVar1[7] = uVar95 + sVar35;
                  puVar1 = __ptr + lVar76 + 0x28;
                  *puVar1 = uVar68 + sVar36;
                  puVar1[1] = uVar89 + sVar37;
                  puVar1[2] = uVar90 + sVar38;
                  puVar1[3] = uVar91 + sVar39;
                  puVar1[4] = uVar92 + sVar40;
                  puVar1[5] = uVar93 + sVar41;
                  puVar1[6] = uVar94 + sVar42;
                  puVar1[7] = uVar95 + sVar43;
                  puVar1 = __ptr + lVar76 + 0x30;
                  *puVar1 = uVar68 + sVar44;
                  puVar1[1] = uVar89 + sVar45;
                  puVar1[2] = uVar90 + sVar46;
                  puVar1[3] = uVar91 + sVar47;
                  puVar1[4] = uVar92 + sVar48;
                  puVar1[5] = uVar93 + sVar49;
                  puVar1[6] = uVar94 + sVar50;
                  puVar1[7] = uVar95 + sVar51;
                  puVar1 = __ptr + lVar76 + 0x38;
                  *puVar1 = uVar68 + sVar52;
                  puVar1[1] = uVar89 + sVar53;
                  puVar1[2] = uVar90 + sVar54;
                  puVar1[3] = uVar91 + sVar55;
                  puVar1[4] = uVar92 + sVar56;
                  puVar1[5] = uVar93 + sVar57;
                  puVar1[6] = uVar94 + sVar58;
                  puVar1[7] = uVar95 + sVar59;
                  lVar76 = lVar76 + 0x40;
                  uVar68 = uVar68 + sVar60;
                  uVar89 = uVar89 + sVar61;
                  uVar90 = uVar90 + sVar62;
                  uVar91 = uVar91 + sVar63;
                  uVar92 = uVar92 + sVar64;
                  uVar93 = uVar93 + sVar65;
                  uVar94 = uVar94 + sVar66;
                  uVar95 = uVar95 + sVar67;
                  uVar79 = uVar79 - 8;
                } while (uVar79 != 0);
              }
              uVar79 = uVar82;
              if (uVar87 == 0) goto joined_r0x00449a88;
              lVar80 = 0;
              do {
                puVar1 = (ushort *)((long)__ptr + lVar80 + lVar76 * 2);
                *puVar1 = uVar68;
                puVar1[1] = uVar89;
                puVar1[2] = uVar90;
                puVar1[3] = uVar91;
                puVar1[4] = uVar92;
                puVar1[5] = uVar93;
                puVar1[6] = uVar94;
                puVar1[7] = uVar95;
                uVar68 = uVar68 + sVar4;
                uVar89 = uVar89 + sVar5;
                uVar90 = uVar90 + sVar6;
                uVar91 = uVar91 + sVar7;
                uVar92 = uVar92 + sVar8;
                uVar93 = uVar93 + sVar9;
                uVar94 = uVar94 + sVar10;
                uVar95 = uVar95 + sVar11;
                lVar80 = lVar80 + 0x10;
                if (uVar87 * 0x10 == lVar80) goto joined_r0x00449a88;
              } while( true );
            }
            uVar79 = 0;
            do {
              __ptr[uVar79] = (ushort)uVar79;
              uVar79 = uVar79 + 1;
joined_r0x00449a88:
            } while (uVar79 != uVar77);
            sort_r_simple<void*>(__ptr,uVar77,(long)this);
            LOCK();
            bVar88 = *(long *)(this + 0x30) == 0;
            if (bVar88) {
              *(ushort **)(this + 0x30) = __ptr;
            }
            UNLOCK();
            if (bVar88) break;
            free(__ptr);
            __ptr = *(ushort **)(this + 0x30);
          } while (__ptr == (ushort *)0x0);
        }
      }
      if (uVar84 != 0) {
        iVar83 = uVar84 - 1;
        iVar85 = 0;
LAB_00449590:
        do {
          uVar68 = *(ushort *)((long)__ptr + (ulong)(iVar83 + iVar85 & 0xfffffffe));
          uVar77 = (ulong)uVar68;
          if (*(int *)(this + 8) == 0x20000) {
            uVar89 = **(ushort **)(this + 0x10);
            if (uVar68 < (ushort)(uVar89 << 8 | uVar89 >> 8)) {
              uVar68 = (*(ushort **)(this + 0x10))[uVar77 + 1];
              uVar68 = uVar68 << 8 | uVar68 >> 8;
              if (uVar68 < 0x102) {
                uVar77 = (ulong)(uint)uVar68;
                goto LAB_004495e5;
              }
              uVar84 = uVar68 - 0x102;
              if (uVar84 < *(uint *)(this + 0x1c)) {
                uVar77 = (ulong)*(uint *)(*(long *)(this + 0x20) + (ulong)uVar84 * 4);
                uVar84 = (uint)*(byte *)(*(long *)(this + 0x28) + uVar77);
                __s2 = (char *)(*(long *)(this + 0x28) + uVar77 + 1);
                goto LAB_00449634;
              }
            }
LAB_00449630:
            __s2 = (char *)0x0;
            uVar84 = 0;
          }
          else {
            if ((*(int *)(this + 8) != 0x10000) || (0x101 < uVar68)) goto LAB_00449630;
LAB_004495e5:
            __s2 = ".notdef" + *(uint *)(format1_names_msgidx + uVar77 * 4);
            uVar84 = ~*(uint *)(format1_names_msgidx + uVar77 * 4) +
                     *(int *)(format1_names_msgidx + uVar77 * 4 + 4);
          }
LAB_00449634:
          iVar69 = uVar86 - uVar84;
          if (iVar69 == 0) {
            iVar69 = memcmp(param_3,__s2,(ulong)uVar86);
          }
          uVar84 = (uint)(iVar83 + iVar85) >> 1;
          if (-1 < iVar69) {
            if (iVar69 == 0) {
              uVar71 = (uint)__ptr[uVar84];
              goto LAB_00449866;
            }
            iVar85 = uVar84 + 1;
            if (iVar83 < iVar85) break;
            goto LAB_00449590;
          }
          iVar83 = uVar84 - 1;
        } while (iVar85 <= iVar83);
      }
    }
  }
LAB_00449667:
  paVar73 = hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
            ::get((hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
                   *)(puVar2 + 0x10));
  if (*(long *)(paVar73 + 0x40) == 0) {
    return 0;
  }
  if (*(int *)(paVar73 + 0xdc) != -1) {
    return 0;
  }
  if ((int)uVar71 < 0) {
    param_4 = strlen(param_3);
  }
  uVar71 = (uint)param_4;
  if (uVar71 == 0) {
    return 0;
  }
  __ptr_00 = *(undefined1 (**) [16])(paVar73 + 0x130);
  while (__ptr_00 == (undefined1 (*) [16])0x0) {
    __ptr_00 = calloc(1,0x10);
    if (__ptr_00 == (undefined1 (*) [16])0x0) {
      LOCK();
      bVar88 = *(long *)(paVar73 + 0x130) == 0;
      if (bVar88) {
        *(long *)(paVar73 + 0x130) = 0;
      }
      UNLOCK();
      if (bVar88) {
        return 0;
      }
    }
    else {
      *__ptr_00 = (undefined1  [16])0x0;
      local_38 = 0xffffffff00000000;
      uVar77 = (ulong)*(uint *)(paVar73 + 0x128);
      if (*(uint *)(paVar73 + 0x128) != 0) {
        uVar82 = 0;
        do {
          if (*(Charset **)(paVar73 + 0x50) == (Charset *)&_hb_NullPool) {
            iVar83 = *(int *)(paVar73 + 0xf4);
            uVar77 = 0;
            if (iVar83 == 2) {
              if (uVar82 < 0x57) {
                puVar74 = expert_subset_charset_to_sid;
LAB_00449bbf:
                uVar77 = (ulong)*(ushort *)(puVar74 + uVar82 * 2);
                uVar84 = (uint)*(ushort *)(puVar74 + uVar82 * 2);
                if (0x186 < uVar84) goto LAB_00449b4e;
              }
            }
            else if (iVar83 == 1) {
              if (uVar82 < 0xa6) {
                puVar74 = expert_charset_to_sid;
                goto LAB_00449bbf;
              }
            }
            else if ((iVar83 == 0) && (uVar77 = 0, uVar82 < 0xe5)) {
              uVar77 = uVar82 & 0xffffffff;
            }
LAB_00449bca:
            auVar96._8_4_ = ~(&cff1_std_strings_msgidx)[uVar77] + (&DAT_005f6d24)[uVar77];
            auVar96._0_8_ = ".notdef" + (uint)(&cff1_std_strings_msgidx)[uVar77];
            auVar96._12_4_ = 0;
          }
          else {
            uVar84 = CFF::Charset::get_sid
                               (*(Charset **)(paVar73 + 0x50),(uint)uVar82,(uint)uVar77,
                                (uint *)&local_38);
            uVar77 = (ulong)uVar84;
            if (uVar84 < 0x187) goto LAB_00449bca;
LAB_00449b4e:
            uVar77 = (ulong)uVar84;
            auVar96 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[]
                                (*(CFFIndex<OT::IntType<unsigned_short,2u>> **)(paVar73 + 0x68),
                                 uVar84 - 0x187);
            if (auVar96._0_8_ == 0) {
              auVar96 = ZEXT816(0x5e2ee7);
            }
          }
          uVar84 = *(uint *)*__ptr_00;
          if (*(int *)(*__ptr_00 + 4) < (int)uVar84) {
LAB_00449c01:
            lVar76 = *(long *)(*__ptr_00 + 8);
            uVar75 = (ulong)*(uint *)(*__ptr_00 + 4);
            *(uint *)(*__ptr_00 + 4) = *(uint *)(*__ptr_00 + 4) + 1;
            *(long *)(lVar76 + uVar75 * 0x18) = auVar96._0_8_;
            *(ulong *)(lVar76 + 8 + uVar75 * 0x18) = auVar96._8_8_ & 0xffffffff;
            *(short *)(lVar76 + 0x10 + uVar75 * 0x18) = (short)uVar77;
            *(undefined4 *)(lVar76 + 0x12 + uVar75 * 0x18) = local_66;
            *(undefined2 *)(lVar76 + 0x16 + uVar75 * 0x18) = local_62;
          }
          else {
            if (-1 < (int)uVar84) {
              uVar81 = *(int *)(*__ptr_00 + 4) + 1;
              if (uVar84 < uVar81) {
                uVar86 = uVar84;
                do {
                  uVar86 = uVar86 + (uVar86 >> 1) + 8;
                } while (uVar86 < uVar81);
                if (0xaaaaaaa < uVar86) {
LAB_00449ca9:
                  *(uint *)*__ptr_00 = ~uVar84;
                  goto LAB_00449cae;
                }
                if (uVar86 == 0) {
                  free(*(void **)(*__ptr_00 + 8));
                  pvVar78 = (void *)0x0;
                }
                else {
                  pvVar78 = realloc(*(void **)(*__ptr_00 + 8),(ulong)uVar86 * 0x18);
                  if (pvVar78 == (void *)0x0) {
                    uVar84 = *(uint *)*__ptr_00;
                    if (uVar86 <= uVar84) goto LAB_00449c01;
                    goto LAB_00449ca9;
                  }
                }
                *(void **)(*__ptr_00 + 8) = pvVar78;
                *(uint *)*__ptr_00 = uVar86;
              }
              goto LAB_00449c01;
            }
LAB_00449cae:
            __hb_CrapPool = (undefined1  [16])0x0;
            DAT_0071cd90 = 0;
          }
          uVar82 = uVar82 + 1;
          uVar77 = (ulong)*(uint *)(paVar73 + 0x128);
        } while (uVar82 < uVar77);
        if ((ulong)*(uint *)(*__ptr_00 + 4) != 0) {
          sort_r_simple<>(*(undefined1 **)(*__ptr_00 + 8),(ulong)*(uint *)(*__ptr_00 + 4),0x18,
                          OT::cff1::accelerator_t::gname_t::cmp);
        }
      }
      LOCK();
      bVar88 = *(long *)(paVar73 + 0x130) == 0;
      if (bVar88) {
        *(undefined1 (**) [16])(paVar73 + 0x130) = __ptr_00;
      }
      UNLOCK();
      if (bVar88) break;
      if (*(int *)*__ptr_00 != 0) {
        *(undefined4 *)(*__ptr_00 + 4) = 0;
        free(*(void **)(*__ptr_00 + 8));
      }
      free(__ptr_00);
    }
    __ptr_00 = *(undefined1 (**) [16])(paVar73 + 0x130);
  }
  if (*(int *)(*__ptr_00 + 4) < 1) {
    return 0;
  }
  lVar76 = *(long *)(*__ptr_00 + 8);
  iVar83 = *(int *)(*__ptr_00 + 4) + -1;
  iVar85 = 0;
  while( true ) {
    while( true ) {
      uVar81 = (uint)(iVar83 + iVar85) >> 1;
      uVar77 = (ulong)uVar81;
      uVar84 = *(uint *)(lVar76 + 8 + uVar77 * 0x18);
      sVar72 = (size_t)uVar84;
      if (uVar71 < uVar84 || uVar71 - uVar84 == 0) {
        sVar72 = param_4 & 0xffffffff;
      }
      iVar70 = strncmp(param_3,*(char **)(lVar76 + uVar77 * 0x18),sVar72);
      iVar69 = uVar71 - uVar84;
      if (iVar70 != 0) {
        iVar69 = iVar70;
      }
      if (-1 < iVar69) break;
      iVar83 = uVar81 - 1;
      if (iVar83 < iVar85) {
        return 0;
      }
    }
    if (iVar69 == 0) break;
    iVar85 = uVar81 + 1;
    if (iVar83 < iVar85) {
      return 0;
    }
  }
  uVar68 = *(ushort *)(lVar76 + 0x10 + uVar77 * 0x18);
  uVar71 = (uint)uVar68;
  if (*(Charset **)(paVar73 + 0x50) != (Charset *)&_hb_NullPool) {
    uVar71 = CFF::Charset::get_glyph
                       (*(Charset **)(paVar73 + 0x50),(uint)uVar68,*(uint *)(paVar73 + 0x128));
    goto LAB_004497b9;
  }
  iVar83 = *(int *)(paVar73 + 0xf4);
  if (iVar83 == 0) {
    if (0xe4 < uVar68) {
      return 0;
    }
    goto LAB_004497b9;
  }
  if (iVar83 == 1) {
    iVar83 = 0xa4;
    iVar85 = 0;
    puVar74 = expert_charset_sid_to_gid;
    do {
      while( true ) {
        uVar71 = (uint)(iVar83 + iVar85) >> 1;
        uVar82 = (ulong)uVar71;
        if (uVar68 < *(ushort *)(expert_charset_sid_to_gid + uVar82 * 4)) break;
        if (*(ushort *)(expert_charset_sid_to_gid + uVar82 * 4) == uVar68) goto LAB_00449885;
        iVar85 = uVar71 + 1;
        if (iVar83 < iVar85) goto LAB_00449859;
      }
      iVar83 = uVar71 - 1;
    } while (iVar85 <= iVar83);
  }
  else if (iVar83 == 2) {
    iVar83 = 0x55;
    iVar85 = 0;
    puVar74 = expert_subset_charset_sid_to_gid;
    do {
      while( true ) {
        uVar71 = (uint)(iVar83 + iVar85) >> 1;
        uVar82 = (ulong)uVar71;
        if (uVar68 < *(ushort *)(expert_subset_charset_sid_to_gid + uVar82 * 4)) break;
        if (*(ushort *)(expert_subset_charset_sid_to_gid + uVar82 * 4) == uVar68) goto LAB_00449885;
        iVar85 = uVar71 + 1;
        if (iVar83 < iVar85) goto LAB_00449859;
      }
      iVar83 = uVar71 - 1;
    } while (iVar85 <= iVar83);
  }
LAB_00449859:
  uVar71 = 0;
  if (uVar68 != 0) {
    return 0;
  }
LAB_00449866:
  *param_5 = uVar71;
  return 1;
LAB_00449885:
  uVar71 = (uint)(byte)puVar74[uVar82 * 4 + 2];
LAB_004497b9:
  if (uVar71 != 0) goto LAB_00449866;
  uVar68 = *(ushort *)(lVar76 + uVar77 * 0x18 + 0x10);
  goto LAB_00449859;
}


