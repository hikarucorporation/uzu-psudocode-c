// Function : socketreceiver_read
// Namespace: 
// Entry    : 0053e990
// Prototype: undefined socketreceiver_read(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 0053e990 - 0053f0c4


void socketreceiver_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long *param_9,uint param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined *param_14)

{
  byte *pbVar1;
  char cVar2;
  uint *puVar3;
  int *piVar4;
  FILE *param0;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  size_t sVar10;
  long lVar11;
  ssize_t sVar12;
  undefined *puVar13;
  void *pvVar14;
  int *piVar15;
  long lVar16;
  uint uVar17;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  code *pcVar22;
  byte *pbVar23;
  sockaddr *__addr;
  socklen_t *psVar24;
  uint uVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar26;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar27;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  socklen_t local_1044;
  long *local_1040;
  undefined4 local_1038;
  
  local_1040 = param_9;
  if ((int)param_9[3] == 0) {
    iVar18 = (int)param_9[1];
    iVar5 = 0x1000;
    if (iVar18 < *(int *)((long)param_9 + 0xc)) {
      iVar5 = *(int *)((long)param_9 + 0xc) + -1;
    }
    if (iVar5 == iVar18) {
      fwrite("pd: dropped message from gui\n",0x1d,1,*(FILE **)PTR_stderr_00715948);
      param_9[1] = 0;
      return;
    }
    uVar6 = param_10;
    sVar12 = recv(param_10,(void *)((long)iVar18 + *param_9),(long)(iVar5 - iVar18),0);
    iVar18 = (int)sVar12;
    if (0 < iVar18) {
      uVar25 = iVar18 + (int)param_9[1];
      if (0xfff < (int)uVar25) {
        uVar25 = 0;
      }
      *(uint *)(param_9 + 1) = uVar25;
      uVar19 = *(uint *)((long)param_9 + 0xc);
      do {
        while( true ) {
          lVar16 = *param_9;
          lVar21 = 1;
          psVar24 = &local_1038;
          while( true ) {
            cVar2 = *(char *)(lVar16 + (int)uVar19);
            *(char *)psVar24 = cVar2;
            if ((cVar2 == ';') &&
               ((uVar19 == 0 || (*(char *)((long)(int)uVar19 + -1 + lVar16) != '\\')))) break;
            uVar19 = uVar19 + 1 & 0xfff;
            lVar21 = lVar21 + 1;
            psVar24 = (socklen_t *)((long)psVar24 + 1);
            if (uVar19 == uVar25) {
              return;
            }
          }
          plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
          binbuf_text(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(uint **)(*(long *)(*plVar7 + 0x38) + 0x28),(byte *)&local_1038,lVar21);
          if ((*(uint *)PTR_sys_debuglevel_007154a8 & 2) != 0) {
            uVar20 = (uint)lVar21;
            if ((socklen_t *)((long)psVar24 + 1) <= &local_1038) {
              uVar20 = 0;
            }
            uVar17 = uVar20 - 2;
            if (local_1038._1_1_ != '\n' || (char)local_1038 != '\r') {
              uVar17 = uVar20;
            }
            pcVar9 = "<< %.*s\n";
            if ((*(uint *)PTR_sys_debuglevel_007154a8 & 4) != 0) {
              pcVar9 = "\x1b[0;1;36m<< %.*s\x1b[0m\n";
            }
            if (stderr_isatty == 0) {
              pcVar9 = "<< %.*s\n";
            }
            fprintf(*(FILE **)PTR_stderr_00715948,pcVar9,(ulong)uVar17);
          }
          param_9 = local_1040;
          *(uint *)(local_1040 + 1) = uVar25;
          *(uint *)((long)local_1040 + 0xc) = uVar19 + 1 & 0xfff;
          if (local_1040[7] == 0) break;
          local_1038 = 0x80;
          iVar18 = getpeername(uVar6,(sockaddr *)local_1040[4],&local_1038);
          if (iVar18 != 0) break;
          (*(code *)param_9[7])(param_9[2]);
          outlet_setstacklim();
          pcVar22 = (code *)param_9[6];
          if (pcVar22 == (code *)0x0) goto LAB_0053ed93;
LAB_0053ed38:
          lVar16 = param_9[2];
          plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
          (*pcVar22)(lVar16,*(undefined8 *)(*(long *)(*plVar7 + 0x38) + 0x28));
          uVar25 = *(uint *)(param_9 + 1);
          uVar19 = *(uint *)((long)param_9 + 0xc);
          if (uVar25 == uVar19) {
            return;
          }
        }
        outlet_setstacklim();
        pcVar22 = (code *)param_9[6];
        if (pcVar22 != (code *)0x0) goto LAB_0053ed38;
LAB_0053ed93:
        plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
        binbuf_eval(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(uint **)(*(long *)(*plVar7 + 0x38) + 0x28),(uint *)0x0,0,0,param_13,param_14);
        uVar25 = *(uint *)(param_9 + 1);
        uVar19 = *(uint *)((long)param_9 + 0xc);
        if (uVar25 == uVar19) {
          return;
        }
      } while( true );
    }
    if (iVar18 < 0) {
      uVar6 = socket_errno();
      uVar27 = socket_strerror(uVar6,(char *)&local_1038,1000);
      param_13 = (char *)(ulong)uVar6;
      pd_error(uVar27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"%s: %s (%d)",
               "recv (tcp)",&local_1038,param_13,param_14);
    }
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar13 = (undefined *)*plVar7;
    piVar15 = *(int **)(puVar13 + 0x38);
    if (*(long **)(piVar15 + 6) == param_9) {
      if (puVar13 == PTR_pd_maininstance_00715748) {
        param0 = *(FILE **)PTR_stderr_00715948;
        piVar15 = __errno_location();
        pcVar9 = strerror(*piVar15);
        fprintf(param0,"read from GUI socket: %s; stopping\n",pcVar9);
                    /* WARNING: Subroutine does not return */
        sys_bail(1);
      }
      iVar18 = *piVar15;
      *(byte *)(piVar15 + 0x12) = *(byte *)(piVar15 + 0x12) | 4;
      if (iVar18 != 0) {
        piVar15 = *(int **)(puVar13 + 0x38);
        lVar16 = *(long *)(piVar15 + 2);
        lVar21 = 0;
        iVar5 = iVar18;
        do {
          if (*(uint *)(lVar16 + lVar21) == param_10) {
            uVar27 = extraout_XMM0_Qa_06;
            if (iVar5 != 1) {
              memmove((void *)(lVar16 + lVar21),(void *)(lVar16 + lVar21 + 0x18),
                      (ulong)(iVar18 - 1) * 0x18 - lVar21);
              plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
              piVar15 = *(int **)(*plVar7 + 0x38);
              uVar27 = extraout_XMM0_Qa_09;
            }
            pcVar9 = (char *)(long)(iVar18 * 0x18);
            pvVar14 = resizebytes(uVar27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  *(void **)(piVar15 + 2),(ulong)pcVar9,(ulong)(pcVar9 + -0x18));
            plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
            piVar4 = *(int **)(*plVar7 + 0x38);
            *(void **)(piVar4 + 2) = pvVar14;
            *piVar4 = iVar18 + -1;
            goto LAB_0053f080;
          }
          iVar5 = iVar5 + -1;
          lVar21 = lVar21 + 0x18;
        } while (iVar5 != 0);
      }
      pcVar9 = (char *)(ulong)param_10;
      post(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "warning: %d removed from poll list but not found");
LAB_0053f080:
      uVar8 = (ulong)param_10;
      uVar27 = socket_close(param_10);
      sys_stopgui(uVar27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar8,pcVar9,
                  extraout_RDX_00,(undefined *)piVar15,param_13,param_14);
      return;
    }
    uVar27 = extraout_XMM0_Qa_06;
    if ((code *)param_9[5] != (code *)0x0) {
      (*(code *)param_9[5])(param_9[2],param_10);
      plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
      puVar13 = (undefined *)*plVar7;
      piVar15 = *(int **)(puVar13 + 0x38);
      uVar27 = extraout_XMM0_Qa_07;
    }
    iVar18 = *piVar15;
    *(byte *)(piVar15 + 0x12) = *(byte *)(piVar15 + 0x12) | 4;
    if (iVar18 != 0) {
      lVar16 = *(long *)(puVar13 + 0x38);
      lVar21 = *(long *)(lVar16 + 8);
      lVar11 = 0;
      iVar5 = iVar18;
      do {
        if (*(uint *)(lVar21 + lVar11) == param_10) goto LAB_0053ef02;
        iVar5 = iVar5 + -1;
        lVar11 = lVar11 + 0x18;
      } while (iVar5 != 0);
    }
  }
  else {
    uVar6 = param_10;
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar16 = *(long *)(*plVar7 + 0x38);
    pbVar1 = (byte *)(lVar16 + 0x78);
    local_1044 = 0x80;
    __addr = (sockaddr *)param_9[4];
    psVar24 = &local_1044;
    if (__addr == (sockaddr *)0x0) {
      psVar24 = (socklen_t *)0x0;
    }
    uVar27 = 0;
    uVar8 = recvfrom(param_10,pbVar1,0xffff,0,__addr,psVar24);
    if (-1 < (int)uVar8) {
      iVar18 = 0;
      uVar26 = extraout_XMM0_Qa;
      do {
        if ((uint)uVar8 != 0) {
          if (0xffff < (uint)uVar8) {
            post(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "warning: incoming UDP packet truncated from %d to %d bytes.");
            uVar8 = 0xffff;
          }
          *(undefined1 *)(lVar16 + 0x78 + (uVar8 & 0xffffffff)) = 0;
          if (*(char *)(lVar16 + 0x78 + (ulong)((int)uVar8 - 1)) == '\n') {
            pcVar9 = strchr((char *)pbVar1,0x3b);
            if (pcVar9 != (char *)0x0) {
              *pcVar9 = '\0';
            }
            if ((code *)param_9[7] != (code *)0x0) {
              (*(code *)param_9[7])(param_9[2],param_9[4]);
            }
            plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
            puVar3 = *(uint **)(*(long *)(*plVar7 + 0x38) + 0x28);
            sVar10 = strlen((char *)pbVar1);
            param_9 = local_1040;
            pbVar23 = pbVar1;
            binbuf_text(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        puVar3,pbVar1,sVar10);
            outlet_setstacklim();
            pcVar22 = (code *)param_9[6];
            if (pcVar22 == (code *)0x0) {
              bug(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "socketreceiver_getudp",pbVar23,extraout_RDX,uVar27,(char *)__addr,psVar24,
                  (char)uVar6);
            }
            else {
              lVar21 = local_1040[2];
              plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
              param_9 = local_1040;
              (*pcVar22)(lVar21,*(undefined8 *)(*(long *)(*plVar7 + 0x38) + 0x28));
            }
            param_10 = uVar6;
          }
          iVar18 = (int)uVar8 + iVar18;
          if (0xffff < iVar18) {
            return;
          }
          iVar5 = socket_bytes_available(param_10);
          if (iVar5 < 1) {
            return;
          }
        }
        __addr = (sockaddr *)param_9[4];
        psVar24 = &local_1044;
        if (__addr == (sockaddr *)0x0) {
          psVar24 = (socklen_t *)0x0;
        }
        uVar27 = 0;
        uVar8 = recvfrom(param_10,pbVar1,0xffff,0,__addr,psVar24);
        uVar26 = extraout_XMM0_Qa_00;
      } while (-1 < (int)uVar8);
    }
    iVar18 = socket_errno_udp();
    if (iVar18 == 0) {
      return;
    }
    uVar6 = socket_errno();
    uVar27 = socket_strerror(uVar6,(char *)&local_1038,1000);
    pd_error(uVar27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"%s: %s (%d)",
             "recv (udp)",&local_1038,(char *)(ulong)uVar6,psVar24);
    if ((code *)param_9[5] == (code *)0x0) {
      return;
    }
    (*(code *)param_9[5])(param_9[2],param_10);
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar16 = *plVar7;
    piVar15 = *(int **)(lVar16 + 0x38);
    iVar18 = *piVar15;
    pbVar1 = (byte *)(piVar15 + 0x12);
    *pbVar1 = *pbVar1 | 4;
    uVar27 = extraout_XMM0_Qa_03;
    if (iVar18 != 0) {
      lVar16 = *(long *)(lVar16 + 0x38);
      lVar21 = *(long *)(lVar16 + 8);
      lVar11 = 0;
      iVar5 = iVar18;
      do {
        if (*(uint *)(lVar21 + lVar11) == param_10) goto LAB_0053ef02;
        iVar5 = iVar5 + -1;
        lVar11 = lVar11 + 0x18;
      } while (iVar5 != 0);
    }
  }
  post(uVar27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "warning: %d removed from poll list but not found");
LAB_0053ef6f:
  socket_close(param_10);
  return;
LAB_0053ef02:
  if (iVar5 != 1) {
    memmove((void *)(lVar21 + lVar11),(void *)(lVar21 + lVar11 + 0x18),
            (ulong)(iVar18 - 1) * 0x18 - lVar11);
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar16 = *(long *)(*plVar7 + 0x38);
    uVar27 = extraout_XMM0_Qa_08;
  }
  pvVar14 = resizebytes(uVar27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(void **)(lVar16 + 8),(long)(iVar18 * 0x18),(long)(iVar18 * 0x18) - 0x18);
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  piVar15 = *(int **)(*plVar7 + 0x38);
  *(void **)(piVar15 + 2) = pvVar14;
  *piVar15 = iVar18 + -1;
  goto LAB_0053ef6f;
}


