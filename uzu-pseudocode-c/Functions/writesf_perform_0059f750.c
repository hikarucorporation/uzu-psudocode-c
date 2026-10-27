// Function : writesf_perform
// Namespace: 
// Entry    : 0059f750
// Prototype: long writesf_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0059f750 - 0059fdc9


long writesf_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  char *pcVar18;
  uint uVar19;
  long param5;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  undefined1 *puVar26;
  long in_R9;
  ulong uVar27;
  uint *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  bool bVar32;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar33;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Db_02;
  
  lVar5 = *(long *)(param_9 + 8);
  if (*(int *)(lVar5 + 0x260) == 2) {
    uVar1 = *(uint *)(lVar5 + 0x250);
    uVar29 = (ulong)(int)uVar1;
    __mutex = (pthread_mutex_t *)(lVar5 + 0x2e8);
    pthread_mutex_lock(__mutex);
    lVar31 = (long)*(int *)(lVar5 + 0x2ac);
    iVar14 = *(int *)(lVar5 + 0x2c4);
    iVar21 = *(int *)(lVar5 + 0x2c8) - iVar14;
    if (iVar21 == 0) {
      iVar21 = *(int *)(lVar5 + 0x2c0);
    }
    uVar2 = *(uint *)(lVar5 + 0x294);
    param5 = lVar31 * uVar29;
    iVar3 = *(int *)(lVar5 + 0x2a8);
    iVar4 = *(int *)(lVar5 + 0x298);
    lVar30 = (long)iVar4;
    bVar32 = *(int *)(lVar5 + 0x2cc) == 0;
    uVar33 = extraout_XMM0_Da;
    uVar34 = extraout_XMM0_Db;
    if ((bVar32) && ((ulong)(long)iVar21 < param5 + 1U)) {
      do {
        puVar13 = PTR_stderr_00715948;
        fwrite("writesf waiting for disk write..\n",0x21,1,*(FILE **)PTR_stderr_00715948);
        in_R9 = param5;
        fprintf(*(FILE **)puVar13,"(head %d, tail %d, room %d, want %ld)\n",*(int *)(lVar5 + 0x2c4),
                *(int *)(lVar5 + 0x2c8),iVar21,param5);
        pthread_cond_signal((pthread_cond_t *)(lVar5 + 0x310));
        pthread_cond_wait((pthread_cond_t *)(lVar5 + 0x340),__mutex);
        fwrite("... done waiting.\n",0x12,1,*(FILE **)puVar13);
        iVar14 = *(int *)(lVar5 + 0x2c4);
        iVar21 = *(int *)(lVar5 + 0x2c8) - iVar14;
        if (iVar21 == 0) {
          iVar21 = *(int *)(lVar5 + 0x2c0);
        }
        bVar32 = *(int *)(lVar5 + 0x2cc) == 0;
        uVar33 = extraout_XMM0_Da_00;
        uVar34 = extraout_XMM0_Db_00;
      } while ((bVar32) && ((ulong)(long)iVar21 < param5 + 1U));
    }
    dVar12 = DAT_0065db00;
    dVar11 = DAT_0065daf8;
    fVar10 = DAT_0065daec;
    fVar9 = DAT_0065dae8;
    if (bVar32) {
      if (0 < (int)uVar2) {
        lVar22 = *(long *)(lVar5 + 0x40);
        lVar15 = (long)iVar14;
        puVar28 = (uint *)(lVar22 + lVar15);
        lVar23 = lVar22 + lVar15 + 7;
        puVar26 = (undefined1 *)(lVar22 + lVar15 + 2);
        lVar22 = lVar22 + lVar15 + 1;
        uVar27 = 0;
        do {
          switch(iVar4) {
          case 2:
            if (iVar3 == 0) {
              if (uVar1 != 0) {
                lVar15 = *(long *)(lVar5 + 0x50 + uVar27 * 8);
                uVar25 = 0;
                lVar20 = lVar22;
                do {
                  uVar19 = (uint)((double)(*(float *)(lVar15 + uVar25 * 4) * fVar10) + dVar12);
                  if ((int)uVar19 < 1) {
                    uVar19 = 1;
                  }
                  if (0xfffe < uVar19) {
                    uVar19 = 0xffff;
                  }
                  *(short *)(lVar20 + -1) = (short)uVar19 + -0x8000;
                  uVar25 = uVar25 + 1;
                  lVar20 = lVar20 + lVar31;
                } while (uVar29 != uVar25);
              }
            }
            else if (uVar1 != 0) {
              lVar15 = *(long *)(lVar5 + 0x50 + uVar27 * 8);
              uVar25 = 0;
              lVar20 = lVar22;
              do {
                uVar19 = (uint)((double)(*(float *)(lVar15 + uVar25 * 4) * fVar10) + dVar12);
                if ((int)uVar19 < 1) {
                  uVar19 = 1;
                }
                if (0xfffe < uVar19) {
                  uVar19 = 0xffff;
                }
                *(ushort *)(lVar20 + -1) =
                     (short)uVar19 << 8 | (ushort)((short)uVar19 + 0x8000U) >> 8;
                uVar25 = uVar25 + 1;
                lVar20 = lVar20 + lVar31;
              } while (uVar29 != uVar25);
            }
            break;
          case 3:
            if (iVar3 == 0) {
              if (uVar1 != 0) {
                lVar15 = *(long *)(lVar5 + 0x50 + uVar27 * 8);
                uVar25 = 0;
                puVar24 = puVar26;
                do {
                  uVar19 = (uint)((double)(*(float *)(lVar15 + uVar25 * 4) * fVar9) + dVar11);
                  if ((int)uVar19 < 1) {
                    uVar19 = 1;
                  }
                  if (0xfffffe < uVar19) {
                    uVar19 = 0xffffff;
                  }
                  iVar14 = uVar19 - 0x800000;
                  *puVar24 = (char)((uint)iVar14 >> 0x10);
                  puVar24[-1] = (char)((uint)iVar14 >> 8);
                  puVar24[-2] = (char)iVar14;
                  uVar25 = uVar25 + 1;
                  puVar24 = puVar24 + lVar31;
                } while (uVar29 != uVar25);
              }
            }
            else if (uVar1 != 0) {
              lVar15 = *(long *)(lVar5 + 0x50 + uVar27 * 8);
              uVar25 = 0;
              puVar24 = puVar26;
              do {
                uVar19 = (uint)((double)(*(float *)(lVar15 + uVar25 * 4) * fVar9) + dVar11);
                if ((int)uVar19 < 1) {
                  uVar19 = 1;
                }
                if (0xfffffe < uVar19) {
                  uVar19 = 0xffffff;
                }
                iVar14 = uVar19 - 0x800000;
                puVar24[-2] = (char)((uint)iVar14 >> 0x10);
                puVar24[-1] = (char)((uint)iVar14 >> 8);
                *puVar24 = (char)iVar14;
                uVar25 = uVar25 + 1;
                puVar24 = puVar24 + lVar31;
              } while (uVar29 != uVar25);
            }
            break;
          case 4:
            if (iVar3 == 0) {
              if (uVar1 != 0) {
                puVar17 = *(uint **)(lVar5 + 0x50 + uVar27 * 8);
                puVar16 = puVar28;
                if (uVar29 != 1) {
                  uVar25 = uVar29 & 0xfffffffffffffffe;
                  do {
                    *puVar16 = *puVar17;
                    *(uint *)((long)puVar16 + lVar31) = puVar17[1];
                    puVar16 = (uint *)((long)puVar16 + lVar31 * 2);
                    puVar17 = puVar17 + 2;
                    uVar25 = uVar25 - 2;
                  } while (uVar25 != 0);
                }
                if ((uVar1 & 1) != 0) {
                  *puVar16 = *puVar17;
                }
              }
            }
            else if (uVar1 != 0) {
              puVar17 = *(uint **)(lVar5 + 0x50 + uVar27 * 8);
              puVar16 = puVar28;
              if (uVar29 != 1) {
                uVar25 = uVar29 & 0xfffffffffffffffe;
                do {
                  uVar19 = *puVar17;
                  *puVar16 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                             uVar19 << 0x18;
                  uVar19 = puVar17[1];
                  *(uint *)((long)puVar16 + lVar31) =
                       uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                       uVar19 << 0x18;
                  puVar16 = (uint *)((long)puVar16 + lVar31 * 2);
                  puVar17 = puVar17 + 2;
                  uVar25 = uVar25 - 2;
                } while (uVar25 != 0);
              }
              if ((uVar1 & 1) != 0) {
                uVar19 = *puVar17;
                *puVar16 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                           uVar19 << 0x18;
              }
            }
            break;
          case 8:
            if (iVar3 == 0) {
              if (uVar1 != 0) {
                lVar15 = *(long *)(lVar5 + 0x50 + uVar27 * 8);
                uVar25 = 0;
                lVar20 = lVar23;
                do {
                  *(double *)(lVar20 + -7) = (double)*(float *)(lVar15 + uVar25 * 4);
                  uVar25 = uVar25 + 1;
                  lVar20 = lVar20 + lVar31;
                } while (uVar29 != uVar25);
              }
            }
            else if (uVar1 != 0) {
              lVar15 = *(long *)(lVar5 + 0x50 + uVar27 * 8);
              uVar25 = 0;
              lVar20 = lVar23;
              do {
                dVar8 = (double)*(float *)(lVar15 + uVar25 * 4);
                *(ulong *)(lVar20 + -7) =
                     (ulong)dVar8 >> 0x38 | ((ulong)dVar8 & 0xff000000000000) >> 0x28 |
                     ((ulong)dVar8 & 0xff0000000000) >> 0x18 | ((ulong)dVar8 & 0xff00000000) >> 8 |
                     ((ulong)dVar8 & 0xff000000) << 8 | ((ulong)dVar8 & 0xff0000) << 0x18 |
                     ((ulong)dVar8 & 0xff00) << 0x28 | (long)dVar8 << 0x38;
                uVar25 = uVar25 + 1;
                lVar20 = lVar20 + lVar31;
              } while (uVar29 != uVar25);
            }
          }
          uVar27 = uVar27 + 1;
          puVar28 = (uint *)((long)puVar28 + lVar30);
          lVar23 = lVar23 + lVar30;
          puVar26 = puVar26 + lVar30;
          lVar22 = lVar22 + lVar30;
        } while (uVar27 != uVar2);
        iVar14 = *(int *)(lVar5 + 0x2c4);
      }
      iVar14 = iVar14 + (int)param5;
      iVar21 = 0;
      if (iVar14 < *(int *)(lVar5 + 0x2c0)) {
        iVar21 = iVar14;
      }
      *(int *)(lVar5 + 0x2c4) = iVar21;
      iVar14 = *(int *)(lVar5 + 0x2d0);
      *(int *)(lVar5 + 0x2d0) = iVar14 + -1;
      if (iVar14 < 2) {
        pthread_cond_signal((pthread_cond_t *)(lVar5 + 0x310));
        *(undefined4 *)(lVar5 + 0x2d0) = *(undefined4 *)(lVar5 + 0x2d4);
      }
    }
    else {
      iVar14 = *(int *)(lVar5 + 0x278);
      if (iVar14 != 0) {
        pcVar6 = *(char **)(lVar5 + 0x270);
        if (*(undefined8 **)(lVar5 + 0x288) == (undefined8 *)0x0) {
          if (iVar14 + 0x3ebU < 4) {
            pcVar18 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(iVar14 + 0x3ebU)];
          }
          else {
            pcVar18 = strerror(iVar14);
            uVar33 = extraout_XMM0_Da_02;
            uVar34 = extraout_XMM0_Db_02;
          }
          pd_error(CONCAT44(uVar34,uVar33),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   lVar5,"%s: %s: %s","[writesf~]",pcVar6,pcVar18,in_R9);
        }
        else {
          uVar7 = **(undefined8 **)(lVar5 + 0x288);
          if (iVar14 + 0x3ebU < 4) {
            pcVar18 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(iVar14 + 0x3ebU)];
          }
          else {
            pcVar18 = strerror(iVar14);
            uVar33 = extraout_XMM0_Da_01;
            uVar34 = extraout_XMM0_Db_01;
          }
          pd_error(CONCAT44(uVar34,uVar33),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   lVar5,"%s %s: %s: %s","[writesf~]",uVar7,pcVar6,pcVar18);
        }
      }
      *(undefined4 *)(lVar5 + 0x260) = 0;
      pthread_cond_signal((pthread_cond_t *)(lVar5 + 0x310));
    }
    pthread_mutex_unlock(__mutex);
  }
  return param_9 + 0x10;
}


