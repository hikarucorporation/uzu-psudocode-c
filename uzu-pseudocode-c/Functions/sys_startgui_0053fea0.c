// Function : sys_startgui
// Namespace: 
// Entry    : 0053fea0
// Prototype: undefined8 sys_startgui(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, FILE * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, FILE * param_14)
// Body     : 0053fea0 - 0054076f


undefined8
sys_startgui(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            FILE *param_9,char *param_10,undefined8 param_11,undefined *param_12,char *param_13,
            FILE *param_14)

{
  byte *pbVar1;
  long lVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined6 extraout_var;
  long lVar13;
  int *piVar14;
  FILE *pFVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar16;
  undefined8 extraout_RDX_01;
  char *pcVar17;
  sched_param *psVar18;
  sockaddr *psVar19;
  addrinfo *paVar20;
  undefined *puVar21;
  undefined2 *puVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar23;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  addrinfo *paStack_19c0;
  undefined1 uVar24;
  undefined8 in_stack_ffffffffffffe648;
  addrinfo *paVar25;
  int local_19b0 [2];
  sched_param local_19a8 [252];
  undefined2 local_15b8 [128];
  undefined2 local_14b8 [128];
  sched_param local_13b8 [1000];
  undefined1 local_418 [1000];
  
  stderr_isatty = isatty(2);
  plVar8 = (long *)pd_getcanvaslist();
  if (plVar8 != (long *)0x0) {
    uVar11 = extraout_RDX;
    do {
      canvas_vis(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar8,param_10,uVar11,
                 param_12,param_13,(undefined *)param_14,(char)in_stack_ffffffffffffe648);
      plVar8 = (long *)plVar8[0x1b];
      uVar11 = extraout_RDX_00;
    } while (plVar8 != (long *)0x0);
  }
  plVar8 = (long *)__tls_get_addr();
  lVar13 = *plVar8;
  pbVar1 = (byte *)(*(long *)(lVar13 + 0x38) + 0x48);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)(*(long *)(lVar13 + 0x38) + 0x48);
  *pbVar1 = *pbVar1 | 1;
  lVar2 = *(long *)(lVar13 + 0x38);
  *(undefined8 *)(lVar2 + 0x38) = 0;
  pbVar1 = (byte *)(lVar2 + 0x48);
  *pbVar1 = *pbVar1 & 0xf7;
  paVar25 = (addrinfo *)0x0;
  if (*(long *)(*(long *)(lVar13 + 0x38) + 8) == 0) {
    pvVar9 = getbytes(0);
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar10 = *(undefined4 **)(*plVar8 + 0x38);
    *(void **)(puVar10 + 2) = pvVar9;
    *puVar10 = 0;
    puVar10 = binbuf_new();
    *(undefined4 **)(*(long *)(*plVar8 + 0x38) + 0x28) = puVar10;
  }
  if (*(uint *)PTR_sys_guisetportnumber_007155e0 == 0) {
    iVar5 = addrinfo_get_list((addrinfo **)(local_19b0 + -2),"localhost",0,1);
    if (iVar5 != 0) goto LAB_00540484;
    addrinfo_sort_list((long *)(local_19b0 + -2),PTR_addrinfo_ipv4_first_00715558);
    puVar21 = PTR_stderr_00715948;
    paVar20 = paVar25;
    if (paVar25 == (addrinfo *)0x0) {
      paVar20 = (addrinfo *)0x0;
    }
    else {
      do {
        iVar5 = socket(paVar25->ai_family,paVar25->ai_socktype,paVar25->ai_protocol);
        if (-1 < iVar5) {
          iVar6 = socket_set_boolopt(iVar5,1,2);
          if (iVar6 < 0) {
            fwrite("setsockopt (SO_REUSEADDR) failed\n",0x21,1,*(FILE **)puVar21);
          }
          iVar6 = socket_set_boolopt(iVar5,6,1);
          if (iVar6 < 0) {
            fwrite("setsockopt (TCP_NODELAY) failed",0x1f,1,*(FILE **)puVar21);
          }
          iVar6 = bind(iVar5,paVar25->ai_addr,paVar25->ai_addrlen);
          if (-1 < iVar6) {
            freeaddrinfo(paVar20);
            uVar24 = SUB81(paVar20,0);
            uVar4 = socket_get_port(iVar5);
            puVar3 = PTR_sys_verbose_00715ce0;
            pFVar15 = (FILE *)(CONCAT62(extraout_var,uVar4) & 0xffffffff);
            iVar6 = (int)CONCAT62(extraout_var,uVar4);
            if (*(int *)PTR_sys_verbose_00715ce0 == 0) {
              pcVar16 = *(char **)PTR_sys_guicmd_00715740;
              if (pcVar16 == (char *)0x0) goto LAB_0054054c;
LAB_005403d1:
              sprintf((char *)local_13b8,"\"%s\" %d\n",pcVar16,iVar6);
              param_9 = pFVar15;
              if (*(int *)puVar3 != 0) goto LAB_005405a1;
LAB_005403f5:
              iVar6 = fork();
            }
            else {
              fprintf(*(FILE **)puVar21,"port %d\n",iVar6);
              pcVar16 = *(char **)PTR_sys_guicmd_00715740;
              if (pcVar16 != (char *)0x0) goto LAB_005403d1;
LAB_0054054c:
              pcVar16 = getenv("HOME");
              param_13 = "";
              if (pcVar16 == (char *)0x0) {
                param_13 = " HOME=/tmp";
              }
              param_14 = param_9;
              sprintf((char *)local_13b8,
                      "TCL_LIBRARY=\"%s/lib/tcl/library\" TK_LIBRARY=\"%s/lib/tk/library\"%s   wish \"%s/tcl/pd-gui.tcl\" %d\n"
                      ,(char *)param_9,(char *)param_9,param_13,(char *)param_9,iVar6);
              if (*(int *)puVar3 == 0) goto LAB_005403f5;
LAB_005405a1:
              fputs((char *)local_13b8,*(FILE **)puVar21);
              iVar6 = fork();
            }
            if (iVar6 < 0) {
              piVar14 = __errno_location();
              if (*piVar14 == 0) {
                fwrite("sys_startgui failed\n",0x14,1,*(FILE **)puVar21);
              }
              else {
                perror("sys_startgui");
              }
            }
            else {
              if (iVar6 == 0) {
                socket_close(iVar5);
                sched_get_priority_min(1);
                sched_get_priority_max(1);
                local_19a8[0].__sched_priority = 0;
                iVar5 = sched_setscheduler(0,0,local_19a8);
                if (iVar5 < 0) {
                  post(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,
                       "priority %d scheduling failed; running at normal priority");
                }
                else {
                  logpost(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,0,4,
                          "running at normal (non-real-time) priority.\n",param_9,param_13,param_14,
                          uVar24);
                }
                munlockall();
                iVar5 = pipe(local_19b0);
                if (iVar5 < 0) {
                  uVar7 = socket_errno();
                  uVar11 = socket_strerror(uVar7,(char *)local_19a8,1000);
                  pd_error(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                           "%s: %s (%d)","pipe",local_19a8,(char *)(ulong)uVar7,param_14);
                }
                else if (local_19b0[0] != 0) {
                  close(0);
                  dup2(local_19b0[0],0);
                  close(local_19b0[0]);
                }
                execl("/bin/sh","sh",&DAT_006558d9,local_13b8,0);
                perror("pd: exec");
                fwrite("Perhaps tcl and tk aren\'t yet installed?\n",0x29,1,*(FILE **)puVar21);
                    /* WARNING: Subroutine does not return */
                _exit(1);
              }
              if (*(int *)puVar3 != 0) {
                param_9 = *(FILE **)puVar21;
                fwrite("Waiting for connection request... \n",0x23,1,param_9);
              }
              iVar6 = listen(iVar5,5);
              if (-1 < iVar6) {
                psVar19 = (sockaddr *)0x0;
                iVar6 = accept(iVar5,(sockaddr *)0x0,(socklen_t *)0x0);
                plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                *(int *)(*(long *)(*plVar8 + 0x38) + 0x14) = iVar6;
                socket_close(iVar5);
                lVar13 = *(long *)(*plVar8 + 0x38);
                if (*(int *)(lVar13 + 0x14) < 0) {
                  uVar7 = socket_errno();
                  psVar18 = local_19a8;
                  uVar11 = socket_strerror(uVar7,(char *)psVar18,1000);
                  pcVar16 = "accept";
                  goto LAB_00540371;
                }
                if (*(int *)puVar3 != 0) {
                  param_9 = *(FILE **)puVar21;
                  psVar19 = (sockaddr *)0xe;
                  fwrite("... connected\n",0xe,1,param_9);
                  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                  lVar13 = *(long *)(*plVar8 + 0x38);
                }
                *(undefined8 *)(lVar13 + 0x38) = 0;
                goto LAB_005401a5;
              }
              uVar7 = socket_errno();
              uVar11 = socket_strerror(uVar7,(char *)local_19a8,1000);
              pd_error(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                       "%s: %s (%d)","listen",local_19a8,(char *)(ulong)uVar7,param_14);
            }
            socket_close(iVar5);
            return 0xffffffff;
          }
          socket_close(iVar5);
        }
        paVar25 = paVar25->ai_next;
      } while (paVar25 != (addrinfo *)0x0);
    }
    freeaddrinfo(paVar20);
    uVar7 = socket_errno();
    psVar18 = local_19a8;
    uVar11 = socket_strerror(uVar7,(char *)psVar18,1000);
    pcVar16 = "bind";
  }
  else {
    iVar5 = addrinfo_get_list((addrinfo **)(local_19b0 + -2),"localhost",
                              (ulong)*(uint *)PTR_sys_guisetportnumber_007155e0,1);
    if (iVar5 != 0) {
LAB_00540484:
      pFVar15 = *(FILE **)PTR_stderr_00715948;
      pcVar16 = gai_strerror(iVar5);
      fprintf(pFVar15,"localhost not found (inet protocol not installed?)\n%s (%d)",pcVar16,iVar5);
      return 0xffffffff;
    }
    addrinfo_sort_list((long *)(local_19b0 + -2),PTR_addrinfo_ipv4_first_00715558);
    puVar21 = PTR_stderr_00715948;
    paVar20 = paVar25;
    if (paVar25 == (addrinfo *)0x0) {
      paVar20 = (addrinfo *)0x0;
    }
    else {
      do {
        iVar5 = socket(paVar25->ai_family,paVar25->ai_socktype,paVar25->ai_protocol);
        if (-1 < iVar5) {
          param_9 = (FILE *)0x1;
          iVar6 = socket_set_boolopt(iVar5,6,1);
          if (iVar6 < 0) {
            param_9 = *(FILE **)puVar21;
            fwrite("setsockopt (TCP_NODELAY) failed",0x1f,1,param_9);
          }
          psVar19 = paVar25->ai_addr;
          uVar11 = socket_connect(DAT_0065260c,iVar5,psVar19,paVar25->ai_addrlen);
          if (-1 < (int)uVar11) {
            freeaddrinfo(paVar20);
            uVar24 = SUB81(paVar20,0);
            plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
            *(int *)(*(long *)(*plVar8 + 0x38) + 0x14) = iVar5;
LAB_005401a5:
            puVar12 = getbytes(0x40);
            pvVar9 = malloc(0x1000);
            puVar12[1] = 0;
            puVar12[2] = 0;
            *(undefined4 *)(puVar12 + 3) = 0;
            puVar12[4] = 0;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[7] = 0;
            *puVar12 = pvVar9;
            if (pvVar9 == (void *)0x0) {
              bug(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"t_socketreceiver",
                  psVar19,extraout_RDX_01,param_9,param_13,param_14,uVar24);
            }
            plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
            lVar13 = *(long *)(*plVar8 + 0x38);
            *(undefined8 **)(lVar13 + 0x18) = puVar12;
            sys_addpollfn(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,*(int *)(lVar13 + 0x14),
                          PTR_socketreceiver_read_00715498,puVar12);
            puVar22 = local_14b8;
            sys_get_audio_apis(puVar22);
            uVar11 = sys_get_midi_apis(local_15b8);
            sys_gui_preferences(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            pdgui_strnescape((long)local_418,1000,(long)PTR_sys_font_00715cc0,0);
            puVar21 = &DAT_005e2ee7;
            sys_vgui(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,"pdtk_pd_startup %d %d %d {%s} %s %s {%s} %s\n"
                    );
            if (init_deken_arch_initialized == '\0') {
              init_deken_arch_initialized = '\x01';
            }
            pcVar16 = "amd64";
            uVar11 = DAT_00656ec8;
            pdgui_vmess(DAT_00656ec0,DAT_00656ec8,param_3,param_4,param_5,param_6,param_7,param_8,
                        0x657466,"ssff","Linux","amd64",puVar21,puVar22,uVar24);
            uVar23 = sys_get_audio_settings((undefined8 *)local_13b8);
            sys_vgui(uVar23,uVar11,param_3,param_4,param_5,param_6,param_7,param_8,
                     "set pd_whichapi %d\n");
            plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
            pcVar17 = "ON";
            if (*(int *)(*(long *)(*plVar8 + 0x48) + 0x38) == 0) {
              pcVar17 = "OFF";
            }
            pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),uVar11,param_3,param_4,
                        param_5,param_6,param_7,param_8,0x6541bb,"s",pcVar17,pcVar16,puVar21,puVar22
                        ,uVar24);
            return 0;
          }
          socket_close(iVar5);
        }
        paVar25 = paVar25->ai_next;
      } while (paVar25 != (addrinfo *)0x0);
    }
    freeaddrinfo(paVar20);
    uVar7 = socket_errno();
    psVar18 = local_13b8;
    uVar11 = socket_strerror(uVar7,(char *)psVar18,1000);
    pcVar16 = "connecting stream socket";
  }
LAB_00540371:
  pd_error(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"%s: %s (%d)",pcVar16,
           psVar18,(char *)(ulong)uVar7,param_14);
  return 0xffffffff;
}


