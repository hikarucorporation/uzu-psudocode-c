// Function : _hb_preprocess_text_vowel_constraints
// Namespace: 
// Entry    : 004276f0
// Prototype: undefined _hb_preprocess_text_vowel_constraints(hb_buffer_t * param_1)
// Body     : 004276f0 - 0042a835


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_preprocess_text_vowel_constraints(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl _hb_preprocess_text_vowel_constraints(hb_buffer_t *param_1)

{
  hb_buffer_t *phVar1;
  hb_buffer_t *phVar2;
  hb_buffer_t *phVar3;
  hb_buffer_t *phVar4;
  hb_buffer_t *phVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  hb_buffer_t hVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  void *pvVar17;
  void *pvVar18;
  bool bVar19;
  
  if (((byte)param_1[0x18] & 0x10) != 0) {
    return;
  }
  phVar1 = param_1 + 0x5a;
  *(undefined2 *)(param_1 + 0x5a) = 1;
  phVar2 = param_1 + 0x5c;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  phVar3 = param_1 + 100;
  *(undefined4 *)(param_1 + 100) = 0;
  phVar4 = param_1 + 0x70;
  phVar5 = param_1 + 0x78;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  iVar15 = *(int *)(param_1 + 0x3c);
  uVar9 = *(uint *)(param_1 + 0x60);
  if (iVar15 < 0x4d6f6469) {
    if (iVar15 < 0x47757275) {
      if (iVar15 < 0x44657661) {
        if (iVar15 == 0x42656e67) {
          if (1 < uVar9) {
            uVar11 = 0;
            uVar13 = 1;
            do {
              if (param_1[0x58] == (hb_buffer_t)0x0) break;
              pvVar17 = *(void **)phVar4;
              iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
              if (iVar15 == 0x985) {
                iVar15 = 0x9be;
LAB_00428c52:
                iVar16 = *(int *)((long)pvVar17 + uVar13 * 0x14);
                if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00428da0:
                  *(uint *)phVar2 = uVar11 + 1;
                }
                else {
                  pvVar18 = *(void **)phVar5;
                  if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00428d99:
                    *(uint *)phVar3 = uVar10 + 1;
                    goto LAB_00428da0;
                  }
                  uVar11 = *(uint *)phVar3 + 1;
                  if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                    if (pvVar18 == pvVar17) {
LAB_00428c97:
                      uVar11 = *(uint *)phVar3;
                      if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                        pvVar18 = *(void **)(param_1 + 0x80);
                        *(void **)(param_1 + 0x78) = pvVar18;
                        if ((ulong)uVar11 != 0) {
                          memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                          pvVar17 = *(void **)phVar4;
                          pvVar18 = *(void **)phVar5;
                        }
                      }
                      else {
                        pvVar18 = pvVar17;
                      }
                    }
LAB_00428d73:
                    uVar11 = *(uint *)phVar2;
                    uVar10 = *(uint *)phVar3;
                    *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                         *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                    puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                    uVar14 = puVar6[1];
                    puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                    *puVar7 = *puVar6;
                    puVar7[1] = uVar14;
                    uVar10 = *(uint *)phVar3;
                    uVar11 = *(uint *)phVar2;
                    goto LAB_00428d99;
                  }
                  uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                  if ((char)uVar14 != '\0') {
                    pvVar18 = *(void **)phVar5;
                    pvVar17 = *(void **)phVar4;
                    if (pvVar18 == pvVar17) goto LAB_00428c97;
                    goto LAB_00428d73;
                  }
                }
                if (iVar16 == iVar15) {
                  _output_with_dotted_circle(param_1);
                }
              }
              else {
                if (iVar15 == 0x98c) {
                  iVar15 = 0x9e2;
                  goto LAB_00428c52;
                }
                if (iVar15 == 0x98b) {
                  iVar15 = 0x9c3;
                  goto LAB_00428c52;
                }
                uVar10 = uVar11;
                if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00428bf7:
                  *(uint *)phVar2 = uVar10 + 1;
                }
                else {
                  pvVar18 = *(void **)phVar5;
                  if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_00428bf0:
                    *(uint *)phVar3 = uVar11 + 1;
                    goto LAB_00428bf7;
                  }
                  uVar11 = *(uint *)phVar3 + 1;
                  if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                    if (pvVar18 == pvVar17) {
LAB_00428d24:
                      uVar11 = *(uint *)phVar3;
                      if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                        pvVar18 = *(void **)(param_1 + 0x80);
                        *(void **)(param_1 + 0x78) = pvVar18;
                        if ((ulong)uVar11 != 0) {
                          memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                          pvVar17 = *(void **)phVar4;
                          pvVar18 = *(void **)phVar5;
                        }
                      }
                      else {
                        pvVar18 = pvVar17;
                      }
                    }
LAB_00428bca:
                    uVar11 = *(uint *)phVar2;
                    uVar10 = *(uint *)phVar3;
                    *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                         *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                    puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                    uVar14 = puVar6[1];
                    puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                    *puVar7 = *puVar6;
                    puVar7[1] = uVar14;
                    uVar11 = *(uint *)phVar3;
                    uVar10 = *(uint *)phVar2;
                    goto LAB_00428bf0;
                  }
                  uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                  if ((char)uVar14 != '\0') {
                    pvVar18 = *(void **)phVar5;
                    pvVar17 = *(void **)phVar4;
                    if (pvVar18 == pvVar17) goto LAB_00428d24;
                    goto LAB_00428bca;
                  }
                }
              }
              uVar11 = *(uint *)phVar2;
              uVar13 = (ulong)(uVar11 + 1);
            } while (uVar11 + 1 < uVar9);
          }
        }
        else if ((iVar15 == 0x42726168) && (1 < uVar9)) {
          uVar11 = 0;
          uVar13 = 1;
          do {
            if (param_1[0x58] == (hb_buffer_t)0x0) break;
            pvVar17 = *(void **)phVar4;
            iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
            if (iVar15 == 0x11005) {
              iVar15 = 0x11038;
LAB_0042877d:
              iVar16 = *(int *)((long)pvVar17 + uVar13 * 0x14);
              if (*phVar1 == (hb_buffer_t)0x0) {
LAB_004288cb:
                *(uint *)phVar2 = uVar11 + 1;
              }
              else {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_004288c4:
                  *(uint *)phVar3 = uVar10 + 1;
                  goto LAB_004288cb;
                }
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_004287c2:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_0042889e:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar10 = *(uint *)phVar3;
                  uVar11 = *(uint *)phVar2;
                  goto LAB_004288c4;
                }
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 != '\0') {
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_004287c2;
                  goto LAB_0042889e;
                }
              }
              if (iVar16 == iVar15) {
                _output_with_dotted_circle(param_1);
              }
            }
            else {
              if (iVar15 == 0x1100f) {
                iVar15 = 0x11042;
                goto LAB_0042877d;
              }
              if (iVar15 == 0x1100b) {
                iVar15 = 0x1103e;
                goto LAB_0042877d;
              }
              uVar10 = uVar11;
              if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00428722:
                *(uint *)phVar2 = uVar10 + 1;
              }
              else {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_0042871b:
                  *(uint *)phVar3 = uVar11 + 1;
                  goto LAB_00428722;
                }
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_0042884f:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_004286f5:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar11 = *(uint *)phVar3;
                  uVar10 = *(uint *)phVar2;
                  goto LAB_0042871b;
                }
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 != '\0') {
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_0042884f;
                  goto LAB_004286f5;
                }
              }
            }
            uVar11 = *(uint *)phVar2;
            uVar13 = (ulong)(uVar11 + 1);
          } while (uVar11 + 1 < uVar9);
        }
      }
      else if (iVar15 == 0x44657661) {
        if (1 < uVar9) {
          uVar11 = 0;
          uVar13 = 1;
          do {
            if (param_1[0x58] == (hb_buffer_t)0x0) break;
            pvVar17 = *(void **)phVar4;
            uVar10 = uVar11;
            switch(*(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14)) {
            case 0x905:
              uVar12 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0x93a;
              if ((uVar12 < 0x1e) && ((0x30279813U >> (uVar12 & 0x1f) & 1) != 0)) {
                if (*phVar1 != (hb_buffer_t)0x0) {
                  pvVar18 = *(void **)phVar5;
                  if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
                    uVar11 = *(uint *)phVar3 + 1;
                    if ((uVar11 != 0) && (*(uint *)(param_1 + 0x68) <= uVar11)) goto LAB_004295e7;
LAB_004292d6:
                    if (pvVar18 == pvVar17) goto LAB_004292df;
LAB_00429567:
                    uVar11 = *(uint *)phVar2;
                    uVar10 = *(uint *)phVar3;
                    *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                         *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                    puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                    uVar14 = puVar6[1];
                    puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                    *puVar7 = *puVar6;
                    puVar7[1] = uVar14;
                    uVar11 = *(uint *)phVar2;
                    uVar10 = *(uint *)phVar3;
                  }
LAB_0042958d:
                  *(uint *)phVar3 = uVar10 + 1;
                }
LAB_00429594:
                *(uint *)phVar2 = uVar11 + 1;
                goto LAB_0042959a;
              }
LAB_00429512:
              hb_buffer_t::next_glyph(param_1);
              goto LAB_004291e8;
            case 0x906:
              iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
              if ((3 < iVar15 - 0x945U) && (iVar15 != 0x93a)) goto LAB_00429512;
              if (*phVar1 == (hb_buffer_t)0x0) goto LAB_00429594;
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) goto LAB_0042958d;
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) goto LAB_004292d6;
LAB_004295e7:
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) {
LAB_004292df:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
                goto LAB_00429567;
              }
              goto LAB_0042959a;
            default:
              if (*phVar1 != (hb_buffer_t)0x0) {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
                  uVar11 = *(uint *)phVar3 + 1;
                  if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
LAB_004294a6:
                    if (pvVar18 == pvVar17) {
LAB_004294af:
                      uVar11 = *(uint *)phVar3;
                      if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                        pvVar18 = *(void **)(param_1 + 0x80);
                        *(void **)(param_1 + 0x78) = pvVar18;
                        if ((ulong)uVar11 != 0) {
                          memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                          pvVar17 = *(void **)phVar4;
                          pvVar18 = *(void **)phVar5;
                        }
                      }
                      else {
                        pvVar18 = pvVar17;
                      }
                    }
                  }
                  else {
LAB_0042960e:
                    uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                    if ((char)uVar14 == '\0') goto LAB_004291e8;
                    pvVar17 = *(void **)phVar4;
                    pvVar18 = *(void **)phVar5;
                    if (*(void **)phVar5 == pvVar17) goto LAB_004294af;
                  }
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar11 = *(uint *)phVar3;
                  uVar10 = *(uint *)phVar2;
                }
LAB_004291db:
                *(uint *)phVar3 = uVar11 + 1;
                uVar11 = uVar10;
              }
              break;
            case 0x909:
              bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0x941;
              if (*phVar1 == (hb_buffer_t)0x0) goto LAB_0042954f;
LAB_0042939c:
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00429548:
                *(uint *)phVar3 = uVar10 + 1;
                goto LAB_0042954f;
              }
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_004293ce:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_00429522:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar10 = *(uint *)phVar3;
                uVar11 = *(uint *)phVar2;
                goto LAB_00429548;
              }
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_004293ce;
                goto LAB_00429522;
              }
              goto LAB_00429555;
            case 0x90f:
              bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0x945U < 3;
              if (*phVar1 != (hb_buffer_t)0x0) goto LAB_0042939c;
LAB_0042954f:
              *(uint *)phVar2 = uVar11 + 1;
LAB_00429555:
              if (bVar19) {
LAB_0042959a:
                _output_with_dotted_circle(param_1);
              }
              goto LAB_004291e8;
            case 0x930:
              if (*(int *)((long)pvVar17 + uVar13 * 0x14) == 0x94d) {
                if (uVar11 + 2 < uVar9) {
                  iVar15 = *(int *)((long)pvVar17 + (ulong)(uVar11 + 2) * 0x14);
                  hb_buffer_t::next_glyph(param_1);
                  if (iVar15 == 0x907) {
                    hb_buffer_t::next_glyph(param_1);
                    goto LAB_0042959a;
                  }
                }
                else {
                  hb_buffer_t::next_glyph(param_1);
                }
                goto LAB_004291e8;
              }
              if (*phVar1 != (hb_buffer_t)0x0) {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
                  uVar11 = *(uint *)phVar3 + 1;
                  if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) goto LAB_004294a6;
                  goto LAB_0042960e;
                }
                goto LAB_004291db;
              }
            }
            *(uint *)phVar2 = uVar11 + 1;
LAB_004291e8:
            uVar11 = *(uint *)phVar2;
            uVar13 = (ulong)(uVar11 + 1);
          } while (uVar11 + 1 < uVar9);
        }
      }
      else if ((iVar15 == 0x47756a72) && (1 < uVar9)) {
        uVar11 = 0;
        uVar13 = 1;
        do {
          if (param_1[0x58] == (hb_buffer_t)0x0) break;
          pvVar17 = *(void **)phVar4;
          iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
          if (iVar15 == 0xac5) {
            iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
            if (*phVar1 == (hb_buffer_t)0x0) {
LAB_004285f6:
              *(uint *)phVar2 = uVar11 + 1;
            }
            else {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_004285ef:
                *(uint *)phVar3 = uVar10 + 1;
                goto LAB_004285f6;
              }
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_004284e0:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_004285c9:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar10 = *(uint *)phVar3;
                uVar11 = *(uint *)phVar2;
                goto LAB_004285ef;
              }
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_004284e0;
                goto LAB_004285c9;
              }
            }
            if (iVar15 == 0xabe) {
LAB_00428645:
              _output_with_dotted_circle(param_1);
            }
          }
          else if (iVar15 == 0xa85) {
            uVar10 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0xabe;
            if ((uVar10 < 0xf) && ((0x6e81U >> (uVar10 & 0x1f) & 1) != 0)) {
              if (*phVar1 == (hb_buffer_t)0x0) {
LAB_0042863f:
                *(uint *)phVar2 = uVar11 + 1;
              }
              else {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00428638:
                  *(uint *)phVar3 = uVar10 + 1;
                  goto LAB_0042863f;
                }
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_00428455:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_00428612:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar10 = *(uint *)phVar3;
                  uVar11 = *(uint *)phVar2;
                  goto LAB_00428638;
                }
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 != '\0') {
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_00428455;
                  goto LAB_00428612;
                }
              }
              goto LAB_00428645;
            }
            hb_buffer_t::next_glyph(param_1);
          }
          else {
            uVar10 = uVar11;
            if (*phVar1 != (hb_buffer_t)0x0) {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_0042856d:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
                }
                else {
                  uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                  if ((char)uVar14 == '\0') goto LAB_004283b9;
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_0042856d;
                }
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar11 = *(uint *)phVar3;
                uVar10 = *(uint *)phVar2;
              }
              *(uint *)phVar3 = uVar11 + 1;
            }
            *(uint *)phVar2 = uVar10 + 1;
          }
LAB_004283b9:
          uVar11 = *(uint *)phVar2;
          uVar13 = (ulong)(uVar11 + 1);
        } while (uVar11 + 1 < uVar9);
      }
    }
    else if (iVar15 < 0x4b6e6461) {
      if (iVar15 == 0x47757275) {
        if (1 < uVar9) {
          uVar11 = 0;
          uVar13 = 1;
          do {
            if (param_1[0x58] == (hb_buffer_t)0x0) break;
            pvVar17 = *(void **)phVar4;
            iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
            if (iVar15 == 0xa73) {
              uVar10 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0xa41;
              if (uVar10 < 0xb) {
                uVar10 = 0x403 >> (uVar10 & 0x1f);
joined_r0x004281a3:
                if ((uVar10 & 1) != 0) goto LAB_004281d1;
              }
LAB_00428254:
              uVar10 = uVar11;
              if (*phVar1 != (hb_buffer_t)0x0) {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
                  uVar11 = *(uint *)phVar3 + 1;
                  if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                    if (pvVar18 == pvVar17) {
LAB_00428290:
                      uVar11 = *(uint *)phVar3;
                      if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                        pvVar18 = *(void **)(param_1 + 0x80);
                        *(void **)(param_1 + 0x78) = pvVar18;
                        if ((ulong)uVar11 != 0) {
                          memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                          pvVar17 = *(void **)phVar4;
                          pvVar18 = *(void **)phVar5;
                        }
                      }
                      else {
                        pvVar18 = pvVar17;
                      }
                    }
                  }
                  else {
                    uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                    if ((char)uVar14 == '\0') goto LAB_0042811d;
                    pvVar18 = *(void **)phVar5;
                    pvVar17 = *(void **)phVar4;
                    if (pvVar18 == pvVar17) goto LAB_00428290;
                  }
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar11 = *(uint *)phVar3;
                  uVar10 = *(uint *)phVar2;
                }
                *(uint *)phVar3 = uVar11 + 1;
              }
              *(uint *)phVar2 = uVar10 + 1;
            }
            else {
              if (iVar15 != 0xa72) {
                if ((iVar15 == 0xa05) &&
                   (uVar10 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0xa3e, uVar10 < 0xf)) {
                  uVar10 = 0x4401 >> (uVar10 & 0x1f);
                  goto joined_r0x004281a3;
                }
                goto LAB_00428254;
              }
              uVar10 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0xa3f;
              if ((8 < uVar10) || ((0x103U >> (uVar10 & 0x1f) & 1) == 0)) goto LAB_00428254;
LAB_004281d1:
              if (*phVar1 == (hb_buffer_t)0x0) {
LAB_0042830e:
                *(uint *)phVar2 = uVar11 + 1;
              }
              else {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00428305:
                  *(uint *)phVar3 = uVar10 + 1;
                  goto LAB_0042830e;
                }
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_0042820d:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if (uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_004282df:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar10 = *(uint *)phVar3;
                  uVar11 = *(uint *)phVar2;
                  goto LAB_00428305;
                }
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 != '\0') {
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_0042820d;
                  goto LAB_004282df;
                }
              }
              _output_with_dotted_circle(param_1);
            }
LAB_0042811d:
            uVar11 = *(uint *)phVar2;
            uVar13 = (ulong)(uVar11 + 1);
          } while (uVar11 + 1 < uVar9);
        }
      }
      else if ((iVar15 == 0x4b686f6a) && (1 < uVar9)) {
        uVar11 = 0;
        uVar13 = 1;
        do {
          if (param_1[0x58] == (hb_buffer_t)0x0) break;
          pvVar17 = *(void **)phVar4;
          iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
          if (iVar15 < 0x1122c) {
            if (iVar15 == 0x11200) {
              uVar10 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0x1122c;
              if ((7 < uVar10) || ((0xa1U >> (uVar10 & 0x1f) & 1) == 0)) {
                hb_buffer_t::next_glyph(param_1);
                goto LAB_004298e0;
              }
              if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00429bc3:
                *(uint *)phVar2 = uVar11 + 1;
              }
              else {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00429bbc:
                  *(uint *)phVar3 = uVar10 + 1;
                  goto LAB_00429bc3;
                }
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_004299dd:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_00429b96:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar10 = *(uint *)phVar3;
                  uVar11 = *(uint *)phVar2;
                  goto LAB_00429bbc;
                }
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 != '\0') {
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_004299dd;
                  goto LAB_00429b96;
                }
              }
            }
            else {
              if (iVar15 != 0x11206) goto LAB_00429ac0;
              bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0x1122c;
              hVar8 = *phVar1;
joined_r0x0042996f:
              if (hVar8 != (hb_buffer_t)0x0) goto LAB_00429a42;
LAB_00429b82:
              *(uint *)phVar2 = uVar11 + 1;
LAB_00429b88:
              if (!bVar19) goto LAB_004298e0;
            }
            _output_with_dotted_circle(param_1);
          }
          else {
            if (iVar15 == 0x1122c) {
              bVar19 = (*(uint *)((long)pvVar17 + uVar13 * 0x14) & 0xfffffffe) == 0x11230;
              if (*phVar1 == (hb_buffer_t)0x0) goto LAB_00429b82;
LAB_00429a42:
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00429b7b:
                *(uint *)phVar3 = uVar10 + 1;
                goto LAB_00429b82;
              }
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_00429a74:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_00429b55:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar10 = *(uint *)phVar3;
                uVar11 = *(uint *)phVar2;
                goto LAB_00429b7b;
              }
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_00429a74;
                goto LAB_00429b55;
              }
              goto LAB_00429b88;
            }
            if (iVar15 == 0x11240) {
              bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0x1122e;
              hVar8 = *phVar1;
              goto joined_r0x0042996f;
            }
LAB_00429ac0:
            uVar10 = uVar11;
            if (*phVar1 != (hb_buffer_t)0x0) {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_00429afc:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
                }
                else {
                  uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                  if ((char)uVar14 == '\0') goto LAB_004298e0;
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_00429afc;
                }
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar11 = *(uint *)phVar3;
                uVar10 = *(uint *)phVar2;
              }
              *(uint *)phVar3 = uVar11 + 1;
            }
            *(uint *)phVar2 = uVar10 + 1;
          }
LAB_004298e0:
          uVar11 = *(uint *)phVar2;
          uVar13 = (ulong)(uVar11 + 1);
        } while (uVar11 + 1 < uVar9);
      }
    }
    else if (iVar15 == 0x4b6e6461) {
      if (1 < uVar9) {
        uVar11 = 0;
        uVar13 = 1;
        do {
          if (param_1[0x58] == (hb_buffer_t)0x0) break;
          pvVar17 = *(void **)phVar4;
          iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
          iVar16 = 0xcbe;
          if ((iVar15 == 0xc89) || (iVar15 == 0xc8b)) {
LAB_004296c5:
            iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
            if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00429813:
              *(uint *)phVar2 = uVar11 + 1;
            }
            else {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_0042980c:
                *(uint *)phVar3 = uVar10 + 1;
                goto LAB_00429813;
              }
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_0042970a:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_004297e6:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar10 = *(uint *)phVar3;
                uVar11 = *(uint *)phVar2;
                goto LAB_0042980c;
              }
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_0042970a;
                goto LAB_004297e6;
              }
            }
            if (iVar15 == iVar16) {
              _output_with_dotted_circle(param_1);
            }
          }
          else {
            if (iVar15 == 0xc92) {
              iVar16 = 0xccc;
              goto LAB_004296c5;
            }
            uVar10 = uVar11;
            if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00429673:
              *(uint *)phVar2 = uVar10 + 1;
            }
            else {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_0042966c:
                *(uint *)phVar3 = uVar11 + 1;
                goto LAB_00429673;
              }
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_00429797:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_00429646:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar11 = *(uint *)phVar3;
                uVar10 = *(uint *)phVar2;
                goto LAB_0042966c;
              }
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_00429797;
                goto LAB_00429646;
              }
            }
          }
          uVar11 = *(uint *)phVar2;
          uVar13 = (ulong)(uVar11 + 1);
        } while (uVar11 + 1 < uVar9);
      }
    }
    else if ((iVar15 == 0x4d6c796d) && (1 < uVar9)) {
      uVar11 = 0;
      uVar13 = 1;
      do {
        if (param_1[0x58] == (hb_buffer_t)0x0) break;
        pvVar17 = *(void **)phVar4;
        switch(*(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14)) {
        case 0xd07:
        case 0xd09:
          bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0xd57;
          hVar8 = *phVar1;
          break;
        default:
          uVar10 = uVar11;
          if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00429ca1:
            *(uint *)phVar2 = uVar10 + 1;
          }
          else {
            pvVar18 = *(void **)phVar5;
            if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_00429c9a:
              *(uint *)phVar3 = uVar11 + 1;
              goto LAB_00429ca1;
            }
            uVar11 = *(uint *)phVar3 + 1;
            if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
              if (pvVar18 == pvVar17) {
LAB_00429d3f:
                uVar11 = *(uint *)phVar3;
                if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                  pvVar18 = *(void **)(param_1 + 0x80);
                  *(void **)(param_1 + 0x78) = pvVar18;
                  if ((ulong)uVar11 != 0) {
                    memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                    pvVar17 = *(void **)phVar4;
                    pvVar18 = *(void **)phVar5;
                  }
                }
                else {
                  pvVar18 = pvVar17;
                }
              }
LAB_00429c74:
              uVar11 = *(uint *)phVar2;
              uVar10 = *(uint *)phVar3;
              *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
              puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
              uVar14 = puVar6[1];
              puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
              *puVar7 = *puVar6;
              puVar7[1] = uVar14;
              uVar11 = *(uint *)phVar3;
              uVar10 = *(uint *)phVar2;
              goto LAB_00429c9a;
            }
            uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
            if ((char)uVar14 != '\0') {
              pvVar18 = *(void **)phVar5;
              pvVar17 = *(void **)phVar4;
              if (pvVar18 == pvVar17) goto LAB_00429d3f;
              goto LAB_00429c74;
            }
          }
          goto LAB_00429cb0;
        case 0xd0e:
          bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0xd46;
          hVar8 = *phVar1;
          break;
        case 0xd12:
          iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
          bVar19 = iVar15 == 0xd57 || iVar15 == 0xd3e;
          hVar8 = *phVar1;
        }
        if (hVar8 == (hb_buffer_t)0x0) {
LAB_00429e7d:
          *(uint *)phVar2 = uVar11 + 1;
        }
        else {
          pvVar18 = *(void **)phVar5;
          if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00429e76:
            *(uint *)phVar3 = uVar10 + 1;
            goto LAB_00429e7d;
          }
          uVar11 = *(uint *)phVar3 + 1;
          if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
            if (pvVar18 == pvVar17) {
LAB_00429e02:
              uVar11 = *(uint *)phVar3;
              if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                pvVar18 = *(void **)(param_1 + 0x80);
                *(void **)(param_1 + 0x78) = pvVar18;
                if ((ulong)uVar11 != 0) {
                  memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                  pvVar17 = *(void **)phVar4;
                  pvVar18 = *(void **)phVar5;
                }
              }
              else {
                pvVar18 = pvVar17;
              }
            }
LAB_00429e50:
            uVar11 = *(uint *)phVar2;
            uVar10 = *(uint *)phVar3;
            *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
            puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
            uVar14 = puVar6[1];
            puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
            *puVar7 = *puVar6;
            puVar7[1] = uVar14;
            uVar10 = *(uint *)phVar3;
            uVar11 = *(uint *)phVar2;
            goto LAB_00429e76;
          }
          uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
          if ((char)uVar14 != '\0') {
            pvVar18 = *(void **)phVar5;
            pvVar17 = *(void **)phVar4;
            if (pvVar18 == pvVar17) goto LAB_00429e02;
            goto LAB_00429e50;
          }
        }
        if (bVar19) {
          _output_with_dotted_circle(param_1);
        }
LAB_00429cb0:
        uVar11 = *(uint *)phVar2;
        uVar13 = (ulong)(uVar11 + 1);
      } while (uVar11 + 1 < uVar9);
    }
  }
  else if (iVar15 < 0x54616b72) {
    if (iVar15 < 0x53696e64) {
      if (iVar15 == 0x4d6f6469) {
        if (1 < uVar9) {
          uVar11 = 0;
          uVar13 = 1;
          do {
            if (param_1[0x58] == (hb_buffer_t)0x0) break;
            pvVar17 = *(void **)phVar4;
            if ((*(uint *)((long)pvVar17 + (ulong)uVar11 * 0x14) & 0xfffffffe) == 0x11600) {
              iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
              if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00428051:
                *(uint *)phVar2 = uVar11 + 1;
              }
              else {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_0042804a:
                  *(uint *)phVar3 = uVar10 + 1;
                  goto LAB_00428051;
                }
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_00427f48:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_00428024:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar10 = *(uint *)phVar3;
                  uVar11 = *(uint *)phVar2;
                  goto LAB_0042804a;
                }
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 != '\0') {
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_00427f48;
                  goto LAB_00428024;
                }
              }
              if (iVar15 - 0x11639U < 2) {
                _output_with_dotted_circle(param_1);
              }
            }
            else {
              uVar10 = uVar11;
              if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00427ec6:
                *(uint *)phVar2 = uVar10 + 1;
              }
              else {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_00427ebf:
                  *(uint *)phVar3 = uVar11 + 1;
                  goto LAB_00427ec6;
                }
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_00427fd5:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_00427e99:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar11 = *(uint *)phVar3;
                  uVar10 = *(uint *)phVar2;
                  goto LAB_00427ebf;
                }
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 != '\0') {
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_00427fd5;
                  goto LAB_00427e99;
                }
              }
            }
            uVar11 = *(uint *)phVar2;
            uVar13 = (ulong)(uVar11 + 1);
          } while (uVar11 + 1 < uVar9);
        }
      }
      else if ((iVar15 == 0x4f727961) && (1 < uVar9)) {
        uVar11 = 0;
        uVar13 = 1;
        do {
          if (param_1[0x58] == (hb_buffer_t)0x0) break;
          pvVar17 = *(void **)phVar4;
          iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
          if (iVar15 == 0xb05) {
            iVar15 = 0xb3e;
LAB_004289e4:
            iVar16 = *(int *)((long)pvVar17 + uVar13 * 0x14);
            if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00428b32:
              *(uint *)phVar2 = uVar11 + 1;
            }
            else {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00428b2b:
                *(uint *)phVar3 = uVar10 + 1;
                goto LAB_00428b32;
              }
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_00428a29:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_00428b05:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar10 = *(uint *)phVar3;
                uVar11 = *(uint *)phVar2;
                goto LAB_00428b2b;
              }
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_00428a29;
                goto LAB_00428b05;
              }
            }
            if (iVar16 == iVar15) {
              _output_with_dotted_circle(param_1);
            }
          }
          else {
            if ((iVar15 == 0xb13) || (iVar15 == 0xb0f)) {
              iVar15 = 0xb57;
              goto LAB_004289e4;
            }
            uVar10 = uVar11;
            if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00428990:
              *(uint *)phVar2 = uVar10 + 1;
            }
            else {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_00428989:
                *(uint *)phVar3 = uVar11 + 1;
                goto LAB_00428990;
              }
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_00428ab6:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_00428963:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar11 = *(uint *)phVar3;
                uVar10 = *(uint *)phVar2;
                goto LAB_00428989;
              }
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_00428ab6;
                goto LAB_00428963;
              }
            }
          }
          uVar11 = *(uint *)phVar2;
          uVar13 = (ulong)(uVar11 + 1);
        } while (uVar11 + 1 < uVar9);
      }
    }
    else if (iVar15 == 0x53696e64) {
      if (1 < uVar9) {
        uVar11 = 0;
        uVar13 = 1;
        do {
          if (param_1[0x58] == (hb_buffer_t)0x0) break;
          pvVar17 = *(void **)phVar4;
          uVar10 = uVar11;
          if (*(int *)((long)pvVar17 + (ulong)uVar11 * 0x14) == 0x112b0) {
            iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
            if ((iVar15 - 0x112e5U < 4) || (iVar15 == 0x112e0)) {
              if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00427c09:
                *(uint *)phVar2 = uVar11 + 1;
              }
              else {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_00427c02:
                  *(uint *)phVar3 = uVar10 + 1;
                  goto LAB_00427c09;
                }
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                  if (pvVar18 == pvVar17) {
LAB_00427aa3:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_00427bdc:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar10 = *(uint *)phVar3;
                  uVar11 = *(uint *)phVar2;
                  goto LAB_00427c02;
                }
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 != '\0') {
                  pvVar18 = *(void **)phVar5;
                  pvVar17 = *(void **)phVar4;
                  if (pvVar18 == pvVar17) goto LAB_00427aa3;
                  goto LAB_00427bdc;
                }
              }
              _output_with_dotted_circle(param_1);
            }
            else {
              if (*phVar1 == (hb_buffer_t)0x0) goto LAB_00427a12;
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) goto LAB_00427a0b;
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) goto LAB_00427b1c;
LAB_00427ba4:
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar17 = *(void **)phVar4;
                pvVar18 = *(void **)phVar5;
                if (*(void **)phVar5 == pvVar17) goto LAB_00427b25;
                goto LAB_004279e5;
              }
            }
          }
          else {
            if (*phVar1 != (hb_buffer_t)0x0) {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
                uVar11 = *(uint *)phVar3 + 1;
                if ((uVar11 != 0) && (*(uint *)(param_1 + 0x68) <= uVar11)) goto LAB_00427ba4;
LAB_00427b1c:
                if (pvVar18 == pvVar17) {
LAB_00427b25:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_004279e5:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar11 = *(uint *)phVar3;
                uVar10 = *(uint *)phVar2;
              }
LAB_00427a0b:
              *(uint *)phVar3 = uVar11 + 1;
              uVar11 = uVar10;
            }
LAB_00427a12:
            *(uint *)phVar2 = uVar11 + 1;
          }
          uVar11 = *(uint *)phVar2;
          uVar13 = (ulong)(uVar11 + 1);
        } while (uVar11 + 1 < uVar9);
      }
    }
    else if ((iVar15 == 0x53696e68) && (1 < uVar9)) {
      uVar11 = 0;
      uVar13 = 1;
      do {
        if (param_1[0x58] == (hb_buffer_t)0x0) break;
        pvVar17 = *(void **)phVar4;
        switch(*(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14)) {
        case 0xd85:
          bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0xdcfU < 3;
          hVar8 = *phVar1;
          break;
        default:
          uVar10 = uVar11;
          if (*phVar1 != (hb_buffer_t)0x0) {
            pvVar18 = *(void **)phVar5;
            if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_0042a574:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
              }
              else {
                uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                if ((char)uVar14 == '\0') goto LAB_0042a4b0;
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_0042a574;
              }
              uVar11 = *(uint *)phVar2;
              uVar10 = *(uint *)phVar3;
              *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
              puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
              uVar14 = puVar6[1];
              puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
              *puVar7 = *puVar6;
              puVar7[1] = uVar14;
              uVar11 = *(uint *)phVar3;
              uVar10 = *(uint *)phVar2;
            }
            *(uint *)phVar3 = uVar11 + 1;
          }
          *(uint *)phVar2 = uVar10 + 1;
          goto LAB_0042a4b0;
        case 0xd8b:
        case 0xd8f:
        case 0xd94:
          bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0xddf;
          hVar8 = *phVar1;
          break;
        case 0xd8d:
          bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0xdd8;
          hVar8 = *phVar1;
          break;
        case 0xd91:
          uVar10 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0xdca;
          if ((0x14 < uVar10) || ((0x1d8001U >> (uVar10 & 0x1f) & 1) == 0)) {
            hb_buffer_t::next_glyph(param_1);
            goto LAB_0042a4b0;
          }
          if (*phVar1 == (hb_buffer_t)0x0) {
LAB_0042a772:
            *(uint *)phVar2 = uVar11 + 1;
          }
          else {
            pvVar18 = *(void **)phVar5;
            if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_0042a76b:
              *(uint *)phVar3 = uVar10 + 1;
              goto LAB_0042a772;
            }
            uVar11 = *(uint *)phVar3 + 1;
            if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
              if (pvVar18 == pvVar17) {
LAB_0042a6bc:
                uVar11 = *(uint *)phVar3;
                if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                  pvVar18 = *(void **)(param_1 + 0x80);
                  *(void **)(param_1 + 0x78) = pvVar18;
                  if ((ulong)uVar11 != 0) {
                    memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                    pvVar17 = *(void **)phVar4;
                    pvVar18 = *(void **)phVar5;
                  }
                }
                else {
                  pvVar18 = pvVar17;
                }
              }
LAB_0042a745:
              uVar11 = *(uint *)phVar2;
              uVar10 = *(uint *)phVar3;
              *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
              puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
              uVar14 = puVar6[1];
              puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
              *puVar7 = *puVar6;
              puVar7[1] = uVar14;
              uVar10 = *(uint *)phVar3;
              uVar11 = *(uint *)phVar2;
              goto LAB_0042a76b;
            }
            uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
            if ((char)uVar14 != '\0') {
              pvVar18 = *(void **)phVar5;
              pvVar17 = *(void **)phVar4;
              if (pvVar18 == pvVar17) goto LAB_0042a6bc;
              goto LAB_0042a745;
            }
          }
          goto LAB_0042a778;
        }
        if (hVar8 == (hb_buffer_t)0x0) {
LAB_0042a727:
          *(uint *)phVar2 = uVar11 + 1;
        }
        else {
          pvVar18 = *(void **)phVar5;
          if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_0042a720:
            *(uint *)phVar3 = uVar10 + 1;
            goto LAB_0042a727;
          }
          uVar11 = *(uint *)phVar3 + 1;
          if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
            if (pvVar18 == pvVar17) {
LAB_0042a60d:
              uVar11 = *(uint *)phVar3;
              if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                pvVar18 = *(void **)(param_1 + 0x80);
                *(void **)(param_1 + 0x78) = pvVar18;
                if ((ulong)uVar11 != 0) {
                  memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                  pvVar17 = *(void **)phVar4;
                  pvVar18 = *(void **)phVar5;
                }
              }
              else {
                pvVar18 = pvVar17;
              }
            }
LAB_0042a6fa:
            uVar11 = *(uint *)phVar2;
            uVar10 = *(uint *)phVar3;
            *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
            puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
            uVar14 = puVar6[1];
            puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
            *puVar7 = *puVar6;
            puVar7[1] = uVar14;
            uVar10 = *(uint *)phVar3;
            uVar11 = *(uint *)phVar2;
            goto LAB_0042a720;
          }
          uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
          if ((char)uVar14 != '\0') {
            pvVar18 = *(void **)phVar5;
            pvVar17 = *(void **)phVar4;
            if (pvVar18 == pvVar17) goto LAB_0042a60d;
            goto LAB_0042a6fa;
          }
        }
        if (bVar19) {
LAB_0042a778:
          _output_with_dotted_circle(param_1);
        }
LAB_0042a4b0:
        uVar11 = *(uint *)phVar2;
        uVar13 = (ulong)(uVar11 + 1);
      } while (uVar11 + 1 < uVar9);
    }
  }
  else if (iVar15 < 0x54656c75) {
    if (iVar15 == 0x54616b72) {
      if (1 < uVar9) {
        uVar11 = 0;
        uVar13 = 1;
        do {
          if (param_1[0x58] == (hb_buffer_t)0x0) break;
          pvVar17 = *(void **)phVar4;
          iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
          if (iVar15 == 0x11686) {
            iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
            if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00429139:
              *(uint *)phVar2 = uVar11 + 1;
            }
            else {
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00429132:
                *(uint *)phVar3 = uVar10 + 1;
                goto LAB_00429139;
              }
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                if (pvVar18 == pvVar17) {
LAB_00428fa0:
                  uVar11 = *(uint *)phVar3;
                  if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                    pvVar18 = *(void **)(param_1 + 0x80);
                    *(void **)(param_1 + 0x78) = pvVar18;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                      pvVar17 = *(void **)phVar4;
                      pvVar18 = *(void **)phVar5;
                    }
                  }
                  else {
                    pvVar18 = pvVar17;
                  }
                }
LAB_0042910c:
                uVar11 = *(uint *)phVar2;
                uVar10 = *(uint *)phVar3;
                *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                uVar14 = puVar6[1];
                puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                *puVar7 = *puVar6;
                puVar7[1] = uVar14;
                uVar10 = *(uint *)phVar3;
                uVar11 = *(uint *)phVar2;
                goto LAB_00429132;
              }
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar18 = *(void **)phVar5;
                pvVar17 = *(void **)phVar4;
                if (pvVar18 == pvVar17) goto LAB_00428fa0;
                goto LAB_0042910c;
              }
            }
            if (iVar15 == 0x116b2) {
LAB_00428e6b:
              _output_with_dotted_circle(param_1);
            }
          }
          else {
            uVar10 = uVar11;
            if (iVar15 == 0x11680) {
              uVar12 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0x116ad;
              if ((uVar12 < 9) && ((0x181U >> (uVar12 & 0x1f) & 1) != 0)) {
                if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00428e65:
                  *(uint *)phVar2 = uVar10 + 1;
                }
                else {
                  pvVar18 = *(void **)phVar5;
                  if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_00428e5e:
                    *(uint *)phVar3 = uVar11 + 1;
                    goto LAB_00428e65;
                  }
                  uVar11 = *(uint *)phVar3 + 1;
                  if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
                    if (pvVar18 == pvVar17) {
LAB_00428f15:
                      uVar11 = *(uint *)phVar3;
                      if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                        pvVar18 = *(void **)(param_1 + 0x80);
                        *(void **)(param_1 + 0x78) = pvVar18;
                        if ((ulong)uVar11 != 0) {
                          memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                          pvVar17 = *(void **)phVar4;
                          pvVar18 = *(void **)phVar5;
                        }
                      }
                      else {
                        pvVar18 = pvVar17;
                      }
                    }
LAB_00428e38:
                    uVar11 = *(uint *)phVar2;
                    uVar10 = *(uint *)phVar3;
                    *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                         *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                    puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                    uVar14 = puVar6[1];
                    puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                    *puVar7 = *puVar6;
                    puVar7[1] = uVar14;
                    uVar11 = *(uint *)phVar3;
                    uVar10 = *(uint *)phVar2;
                    goto LAB_00428e5e;
                  }
                  uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
                  if ((char)uVar14 != '\0') {
                    pvVar18 = *(void **)phVar5;
                    pvVar17 = *(void **)phVar4;
                    if (pvVar18 == pvVar17) goto LAB_00428f15;
                    goto LAB_00428e38;
                  }
                }
                goto LAB_00428e6b;
              }
              if (*phVar1 == (hb_buffer_t)0x0) goto LAB_004290fe;
              pvVar18 = *(void **)phVar5;
              if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) goto LAB_004290f7;
              uVar11 = *(uint *)phVar3 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) goto LAB_00429020;
LAB_0042909d:
              uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
              if ((char)uVar14 != '\0') {
                pvVar17 = *(void **)phVar4;
                pvVar18 = *(void **)phVar5;
                if (*(void **)phVar5 == pvVar17) goto LAB_00429029;
                goto LAB_004290d1;
              }
            }
            else {
              if (*phVar1 != (hb_buffer_t)0x0) {
                pvVar18 = *(void **)phVar5;
                if ((pvVar18 != pvVar17) || (*(uint *)phVar3 != uVar11)) {
                  uVar11 = *(uint *)phVar3 + 1;
                  if ((uVar11 != 0) && (*(uint *)(param_1 + 0x68) <= uVar11)) goto LAB_0042909d;
LAB_00429020:
                  if (pvVar18 == pvVar17) {
LAB_00429029:
                    uVar11 = *(uint *)phVar3;
                    if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                      pvVar18 = *(void **)(param_1 + 0x80);
                      *(void **)(param_1 + 0x78) = pvVar18;
                      if ((ulong)uVar11 != 0) {
                        memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                        pvVar17 = *(void **)phVar4;
                        pvVar18 = *(void **)phVar5;
                      }
                    }
                    else {
                      pvVar18 = pvVar17;
                    }
                  }
LAB_004290d1:
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                  *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                       *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
                  puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
                  uVar14 = puVar6[1];
                  puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar14;
                  uVar11 = *(uint *)phVar2;
                  uVar10 = *(uint *)phVar3;
                }
LAB_004290f7:
                *(uint *)phVar3 = uVar10 + 1;
              }
LAB_004290fe:
              *(uint *)phVar2 = uVar11 + 1;
            }
          }
          uVar11 = *(uint *)phVar2;
          uVar13 = (ulong)(uVar11 + 1);
        } while (uVar11 + 1 < uVar9);
      }
    }
    else if ((iVar15 == 0x54616d6c) && (1 < uVar9)) {
      uVar11 = 0;
      uVar13 = 1;
      do {
        if (param_1[0x58] == (hb_buffer_t)0x0) break;
        pvVar17 = *(void **)phVar4;
        if (*(int *)((long)pvVar17 + (ulong)uVar11 * 0x14) == 0xb85) {
          iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
          if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00427dfd:
            *(uint *)phVar2 = uVar11 + 1;
          }
          else {
            pvVar18 = *(void **)phVar5;
            if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_00427df6:
              *(uint *)phVar3 = uVar10 + 1;
              goto LAB_00427dfd;
            }
            uVar11 = *(uint *)phVar3 + 1;
            if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
              if (pvVar18 == pvVar17) {
LAB_00427cf4:
                uVar11 = *(uint *)phVar3;
                if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                  pvVar18 = *(void **)(param_1 + 0x80);
                  *(void **)(param_1 + 0x78) = pvVar18;
                  if ((ulong)uVar11 != 0) {
                    memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                    pvVar17 = *(void **)phVar4;
                    pvVar18 = *(void **)phVar5;
                  }
                }
                else {
                  pvVar18 = pvVar17;
                }
              }
LAB_00427dd0:
              uVar11 = *(uint *)phVar2;
              uVar10 = *(uint *)phVar3;
              *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
              puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
              uVar14 = puVar6[1];
              puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
              *puVar7 = *puVar6;
              puVar7[1] = uVar14;
              uVar10 = *(uint *)phVar3;
              uVar11 = *(uint *)phVar2;
              goto LAB_00427df6;
            }
            uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
            if ((char)uVar14 != '\0') {
              pvVar18 = *(void **)phVar5;
              pvVar17 = *(void **)phVar4;
              if (pvVar18 == pvVar17) goto LAB_00427cf4;
              goto LAB_00427dd0;
            }
          }
          if (iVar15 == 0xbc2) {
            _output_with_dotted_circle(param_1);
          }
        }
        else {
          uVar10 = uVar11;
          if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00427c79:
            *(uint *)phVar2 = uVar10 + 1;
          }
          else {
            pvVar18 = *(void **)phVar5;
            if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_00427c72:
              *(uint *)phVar3 = uVar11 + 1;
              goto LAB_00427c79;
            }
            uVar11 = *(uint *)phVar3 + 1;
            if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
              if (pvVar18 == pvVar17) {
LAB_00427d81:
                uVar11 = *(uint *)phVar3;
                if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                  pvVar18 = *(void **)(param_1 + 0x80);
                  *(void **)(param_1 + 0x78) = pvVar18;
                  if ((ulong)uVar11 != 0) {
                    memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                    pvVar17 = *(void **)phVar4;
                    pvVar18 = *(void **)phVar5;
                  }
                }
                else {
                  pvVar18 = pvVar17;
                }
              }
LAB_00427c4c:
              uVar11 = *(uint *)phVar2;
              uVar10 = *(uint *)phVar3;
              *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
              puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
              uVar14 = puVar6[1];
              puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
              *puVar7 = *puVar6;
              puVar7[1] = uVar14;
              uVar11 = *(uint *)phVar3;
              uVar10 = *(uint *)phVar2;
              goto LAB_00427c72;
            }
            uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
            if ((char)uVar14 != '\0') {
              pvVar18 = *(void **)phVar5;
              pvVar17 = *(void **)phVar4;
              if (pvVar18 == pvVar17) goto LAB_00427d81;
              goto LAB_00427c4c;
            }
          }
        }
        uVar11 = *(uint *)phVar2;
        uVar13 = (ulong)(uVar11 + 1);
      } while (uVar11 + 1 < uVar9);
    }
  }
  else if (iVar15 == 0x54656c75) {
    if (1 < uVar9) {
      uVar11 = 0;
      uVar13 = 1;
      do {
        if (param_1[0x58] == (hb_buffer_t)0x0) break;
        pvVar17 = *(void **)phVar4;
        iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
        if (iVar15 < 0xc46) {
          if (iVar15 == 0xc12) {
            iVar15 = *(int *)((long)pvVar17 + uVar13 * 0x14);
            bVar19 = iVar15 == 0xc55 || iVar15 == 0xc4c;
            if (*phVar1 != (hb_buffer_t)0x0) goto LAB_0042a2a7;
LAB_0042a3e2:
            *(uint *)phVar2 = uVar11 + 1;
            goto LAB_0042a3e8;
          }
          if (iVar15 == 0xc3f) goto LAB_0042a267;
LAB_0042a32a:
          uVar10 = uVar11;
          if (*phVar1 == (hb_buffer_t)0x0) {
LAB_0042a208:
            *(uint *)phVar2 = uVar10 + 1;
          }
          else {
            pvVar18 = *(void **)phVar5;
            if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_0042a201:
              *(uint *)phVar3 = uVar11 + 1;
              goto LAB_0042a208;
            }
            uVar11 = *(uint *)phVar3 + 1;
            if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
              if (pvVar18 == pvVar17) {
LAB_0042a366:
                uVar11 = *(uint *)phVar3;
                if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                  pvVar18 = *(void **)(param_1 + 0x80);
                  *(void **)(param_1 + 0x78) = pvVar18;
                  if ((ulong)uVar11 != 0) {
                    memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                    pvVar17 = *(void **)phVar4;
                    pvVar18 = *(void **)phVar5;
                  }
                }
                else {
                  pvVar18 = pvVar17;
                }
              }
LAB_0042a1db:
              uVar11 = *(uint *)phVar2;
              uVar10 = *(uint *)phVar3;
              *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
              puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
              uVar14 = puVar6[1];
              puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
              *puVar7 = *puVar6;
              puVar7[1] = uVar14;
              uVar11 = *(uint *)phVar3;
              uVar10 = *(uint *)phVar2;
              goto LAB_0042a201;
            }
            uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
            if ((char)uVar14 != '\0') {
              pvVar18 = *(void **)phVar5;
              pvVar17 = *(void **)phVar4;
              if (pvVar18 == pvVar17) goto LAB_0042a366;
              goto LAB_0042a1db;
            }
          }
        }
        else {
          if ((iVar15 != 0xc46) && (iVar15 != 0xc4a)) goto LAB_0042a32a;
LAB_0042a267:
          bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0xc55;
          if (*phVar1 == (hb_buffer_t)0x0) goto LAB_0042a3e2;
LAB_0042a2a7:
          pvVar18 = *(void **)phVar5;
          if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_0042a3db:
            *(uint *)phVar3 = uVar10 + 1;
            goto LAB_0042a3e2;
          }
          uVar11 = *(uint *)phVar3 + 1;
          if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
            if (pvVar18 == pvVar17) {
LAB_0042a2d9:
              uVar11 = *(uint *)phVar3;
              if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                pvVar18 = *(void **)(param_1 + 0x80);
                *(void **)(param_1 + 0x78) = pvVar18;
                if ((ulong)uVar11 != 0) {
                  memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                  pvVar17 = *(void **)phVar4;
                  pvVar18 = *(void **)phVar5;
                }
              }
              else {
                pvVar18 = pvVar17;
              }
            }
LAB_0042a3b5:
            uVar11 = *(uint *)phVar2;
            uVar10 = *(uint *)phVar3;
            *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
            puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
            uVar14 = puVar6[1];
            puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
            *puVar7 = *puVar6;
            puVar7[1] = uVar14;
            uVar10 = *(uint *)phVar3;
            uVar11 = *(uint *)phVar2;
            goto LAB_0042a3db;
          }
          uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
          if ((char)uVar14 != '\0') {
            pvVar18 = *(void **)phVar5;
            pvVar17 = *(void **)phVar4;
            if (pvVar18 == pvVar17) goto LAB_0042a2d9;
            goto LAB_0042a3b5;
          }
LAB_0042a3e8:
          if (bVar19) {
            _output_with_dotted_circle(param_1);
          }
        }
        uVar11 = *(uint *)phVar2;
        uVar13 = (ulong)(uVar11 + 1);
      } while (uVar11 + 1 < uVar9);
    }
  }
  else if ((iVar15 == 0x54697268) && (1 < uVar9)) {
    uVar11 = 0;
    uVar13 = 1;
    do {
      if (param_1[0x58] == (hb_buffer_t)0x0) break;
      pvVar17 = *(void **)phVar4;
      iVar15 = *(int *)((long)pvVar17 + (ulong)uVar11 * 0x14);
      if (iVar15 < 0x1148d) {
        if (iVar15 == 0x11481) {
          bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0x114b0;
          hVar8 = *phVar1;
joined_r0x00429fcc:
          if (hVar8 != (hb_buffer_t)0x0) goto LAB_0042a008;
LAB_0042a143:
          *(uint *)phVar2 = uVar11 + 1;
          goto LAB_0042a149;
        }
        if (iVar15 == 0x1148b) goto LAB_00429fd3;
LAB_0042a08b:
        uVar10 = uVar11;
        if (*phVar1 == (hb_buffer_t)0x0) {
LAB_00429f4b:
          *(uint *)phVar2 = uVar10 + 1;
        }
        else {
          pvVar18 = *(void **)phVar5;
          if ((pvVar18 == pvVar17) && (*(uint *)phVar3 == uVar11)) {
LAB_00429f44:
            *(uint *)phVar3 = uVar11 + 1;
            goto LAB_00429f4b;
          }
          uVar11 = *(uint *)phVar3 + 1;
          if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
            if (pvVar18 == pvVar17) {
LAB_0042a0c7:
              uVar11 = *(uint *)phVar3;
              if (*(uint *)phVar2 + 1 < uVar11 + 1) {
                pvVar18 = *(void **)(param_1 + 0x80);
                *(void **)(param_1 + 0x78) = pvVar18;
                if ((ulong)uVar11 != 0) {
                  memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                  pvVar17 = *(void **)phVar4;
                  pvVar18 = *(void **)phVar5;
                }
              }
              else {
                pvVar18 = pvVar17;
              }
            }
LAB_00429f1e:
            uVar11 = *(uint *)phVar2;
            uVar10 = *(uint *)phVar3;
            *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
            puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
            uVar14 = puVar6[1];
            puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
            *puVar7 = *puVar6;
            puVar7[1] = uVar14;
            uVar11 = *(uint *)phVar3;
            uVar10 = *(uint *)phVar2;
            goto LAB_00429f44;
          }
          uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
          if ((char)uVar14 != '\0') {
            pvVar18 = *(void **)phVar5;
            pvVar17 = *(void **)phVar4;
            if (pvVar18 == pvVar17) goto LAB_0042a0c7;
            goto LAB_00429f1e;
          }
        }
      }
      else {
        if (iVar15 != 0x1148d) {
          if (iVar15 != 0x114aa) goto LAB_0042a08b;
          bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) - 0x114b5U < 2;
          hVar8 = *phVar1;
          goto joined_r0x00429fcc;
        }
LAB_00429fd3:
        bVar19 = *(int *)((long)pvVar17 + uVar13 * 0x14) == 0x114ba;
        if (*phVar1 == (hb_buffer_t)0x0) goto LAB_0042a143;
LAB_0042a008:
        pvVar18 = *(void **)phVar5;
        if ((pvVar18 == pvVar17) && (uVar10 = uVar11, *(uint *)phVar3 == uVar11)) {
LAB_0042a13c:
          *(uint *)phVar3 = uVar10 + 1;
          goto LAB_0042a143;
        }
        uVar11 = *(uint *)phVar3 + 1;
        if ((uVar11 == 0) || (uVar11 < *(uint *)(param_1 + 0x68))) {
          if (pvVar18 == pvVar17) {
LAB_0042a03a:
            uVar11 = *(uint *)phVar3;
            if (*(uint *)phVar2 + 1 < uVar11 + 1) {
              pvVar18 = *(void **)(param_1 + 0x80);
              *(void **)(param_1 + 0x78) = pvVar18;
              if ((ulong)uVar11 != 0) {
                memcpy(pvVar18,pvVar17,(ulong)uVar11 * 0x14);
                pvVar17 = *(void **)phVar4;
                pvVar18 = *(void **)phVar5;
              }
            }
            else {
              pvVar18 = pvVar17;
            }
          }
LAB_0042a116:
          uVar11 = *(uint *)phVar2;
          uVar10 = *(uint *)phVar3;
          *(undefined4 *)((long)pvVar18 + (ulong)uVar10 * 0x14 + 0x10) =
               *(undefined4 *)((long)pvVar17 + (ulong)uVar11 * 0x14 + 0x10);
          puVar6 = (undefined8 *)((long)pvVar17 + (ulong)uVar11 * 0x14);
          uVar14 = puVar6[1];
          puVar7 = (undefined8 *)((long)pvVar18 + (ulong)uVar10 * 0x14);
          *puVar7 = *puVar6;
          puVar7[1] = uVar14;
          uVar10 = *(uint *)phVar3;
          uVar11 = *(uint *)phVar2;
          goto LAB_0042a13c;
        }
        uVar14 = hb_buffer_t::enlarge(param_1,uVar11);
        if ((char)uVar14 != '\0') {
          pvVar18 = *(void **)phVar5;
          pvVar17 = *(void **)phVar4;
          if (pvVar18 == pvVar17) goto LAB_0042a03a;
          goto LAB_0042a116;
        }
LAB_0042a149:
        if (bVar19) {
          _output_with_dotted_circle(param_1);
        }
      }
      uVar11 = *(uint *)phVar2;
      uVar13 = (ulong)(uVar11 + 1);
    } while (uVar11 + 1 < uVar9);
  }
  hb_buffer_t::sync(param_1);
  return;
}


