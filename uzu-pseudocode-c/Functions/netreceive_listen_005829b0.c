// Function : netreceive_listen
// Namespace: 
// Entry    : 005829b0
// Prototype: undefined netreceive_listen(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, char * param_14)
// Body     : 005829b0 - 00582e87


void netreceive_listen(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
                      char *param_14)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  addrinfo **ppaVar6;
  int *piVar7;
  undefined7 extraout_var;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar10;
  undefined *puVar11;
  code *pcVar12;
  addrinfo *paVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined1 in_stack_fffffffffffffbc8;
  addrinfo *local_430;
  char *local_428;
  char *local_420;
  addrinfo *local_418 [125];
  
  uVar1 = *(uint *)(param_9 + 0x4c);
  local_430 = (addrinfo *)0x0;
  piVar7 = param_12;
  uVar15 = netreceive_closeall(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9);
  if (param_11 == 0) {
    return;
  }
  iVar4 = *param_12;
  uVar14 = 0;
  if (iVar4 == 1) {
    uVar14 = (uint)(float)param_12[2];
    param_11 = param_11 - 1;
    if (param_11 == 0) {
      pcVar10 = (char *)0x0;
      goto joined_r0x00582a3f;
    }
    param_12 = param_12 + 4;
    iVar4 = *param_12;
  }
  if (iVar4 == 2) {
    pcVar10 = (char *)**(undefined8 **)(param_12 + 2);
    param_11 = param_11 - 1;
    if (param_11 == 0) goto joined_r0x00582a3f;
    param_12 = param_12 + 4;
  }
  else {
    pcVar10 = (char *)0x0;
  }
  uVar15 = pd_error(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    "netreceive: extra arguments ignored:",extraout_RDX,piVar7,param_13,param_14);
  uVar15 = postatom(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,param_12
                    ,extraout_RDX_00,piVar7,param_13,param_14);
  endpost(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
joined_r0x00582a3f:
  if (0 < (int)uVar14) {
    uVar9 = (ulong)uVar1;
    uVar3 = addrinfo_get_list(&local_430,pcVar10,(ulong)uVar14,uVar1);
    if (uVar3 == 0) {
      if (pcVar10 == (char *)0x0) {
        puVar11 = PTR_addrinfo_ipv6_first_00715d58;
      }
      else {
        puVar11 = PTR_addrinfo_ipv4_first_00715558;
      }
      local_428 = pcVar10;
      addrinfo_sort_list((long *)&local_430,puVar11);
      if (local_430 == (addrinfo *)0x0) {
        paVar13 = (addrinfo *)0x0;
      }
      else {
        local_420 = "";
        paVar13 = local_430;
        do {
          iVar4 = socket(paVar13->ai_family,paVar13->ai_socktype,paVar13->ai_protocol);
          if (-1 < iVar4) {
            iVar5 = fcntl(iVar4,2,1);
            if (iVar5 < 0) {
              piVar7 = __errno_location();
              pcVar10 = strerror(*piVar7);
              pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,"netsend: CLOEXEC failed: %s",pcVar10,uVar9,param_13,param_14);
            }
            uVar9 = 1;
            iVar5 = socket_set_boolopt(iVar4,1,2);
            if (iVar5 < 0) {
              post(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "netreceive: setsockopt (SO_REUSEADDR) failed");
              if (uVar1 == 2) goto LAB_00582bb4;
LAB_00582b69:
              if (uVar1 == 1) {
                uVar9 = 1;
                iVar5 = socket_set_boolopt(iVar4,6,1);
                pcVar10 = "netreceive: setsockopt (TCP_NODELAY) failed";
                uVar15 = extraout_XMM0_Qa_03;
                if (iVar5 < 0) {
LAB_00582bdc:
                  post(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar10);
                }
              }
            }
            else {
              if (uVar1 != 2) goto LAB_00582b69;
LAB_00582bb4:
              if (paVar13->ai_family == 2) {
                uVar9 = 1;
                iVar5 = socket_set_boolopt(iVar4,1,6);
                pcVar10 = "netreceive: setsockopt (SO_BROADCAST) failed";
                uVar15 = extraout_XMM0_Qa_04;
                if (-1 < iVar5) goto LAB_00582bf0;
                goto LAB_00582bdc;
              }
            }
LAB_00582bf0:
            if ((local_428 == (char *)0x0) && (paVar13->ai_family == 10)) {
              uVar9 = 0;
              iVar5 = socket_set_boolopt(iVar4,0x29,0x1a);
              if (-1 < iVar5) goto LAB_00582c20;
            }
            else {
LAB_00582c20:
              bVar2 = sockaddr_is_multicast((short *)paVar13->ai_addr);
              if ((int)CONCAT71(extraout_var,bVar2) == 0) {
                iVar5 = bind(iVar4,paVar13->ai_addr,paVar13->ai_addrlen);
                uVar15 = extraout_XMM0_Qa_00;
                if (-1 < iVar5) goto LAB_00582cd8;
              }
              else {
                pcVar10 = "0.0.0.0";
                if (paVar13->ai_family == 10) {
                  pcVar10 = "::";
                }
                uVar9 = (ulong)uVar1;
                uVar3 = addrinfo_get_list(local_418,pcVar10,(ulong)uVar14,uVar1);
                if (uVar3 != 0) {
                  pcVar10 = gai_strerror(uVar3);
                  pd_error(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,param_9,
                           "netreceive: getting \"any\" address for multicast failed %s (%d)",
                           pcVar10,(ulong)uVar3,param_13,param_14);
                  sys_closesocket(iVar4);
                  return;
                }
                iVar5 = bind(iVar4,local_418[0]->ai_addr,local_418[0]->ai_addrlen);
                freeaddrinfo(local_418[0]);
                if (-1 < iVar5) {
                  iVar5 = socket_join_multicast_group(iVar4,(short *)paVar13->ai_addr);
                  local_420 = " (multicast)";
                  uVar15 = extraout_XMM0_Qa_05;
                  if (iVar5 < 0) {
                    uVar3 = socket_errno();
                    uVar15 = socket_strerror(uVar3,(char *)local_418,1000);
                    param_13 = (char *)(ulong)uVar3;
                    uVar15 = pd_error(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,param_9,
                                      "netreceive: joining multicast group %s failed: %s (%d)",
                                      local_428,local_418,param_13,param_14);
                  }
LAB_00582cd8:
                  if (local_428 == (char *)0x0) {
                    logpost(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,4,
                            "listening on %d",(ulong)uVar14,param_13,param_14,
                            in_stack_fffffffffffffbc8);
                  }
                  else {
                    sockaddr_get_addrstr((short *)paVar13->ai_addr,(char *)local_418,0x100);
                    param_13 = (char *)(ulong)uVar14;
                    param_14 = local_420;
                    logpost(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,0,4,"listening on %s %d%s",local_418,param_13,local_420,
                            in_stack_fffffffffffffbc8);
                  }
                  freeaddrinfo(local_430);
                  *(int *)(param_9 + 0x48) = iVar4;
                  if (uVar1 == 2) {
                    if (*(int *)(param_9 + 0x50) == 0) {
                      pcVar12 = netsend_read;
                      if (*(long *)(param_9 + 0x30) == 0) {
                        pcVar12 = (code *)0x0;
                      }
                      puVar8 = socketreceiver_new(extraout_XMM0_Qa_08,param_2,param_3,param_4,
                                                  param_5,param_6,param_7,param_8,param_9,0,pcVar12,
                                                  1,param_13,param_14);
                      uVar15 = extraout_XMM0_Qa_10;
                      if (*(long *)(param_9 + 0x40) != 0) {
                        uVar15 = socketreceiver_set_fromaddrfn((long)puVar8,0x583040);
                      }
                      sys_addpollfn(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    *(int *)(param_9 + 0x48),PTR_socketreceiver_read_00715498,puVar8
                                   );
                      *(undefined8 *)(param_9 + 0x38) = 0;
                      *(undefined8 **)(param_9 + 0x58) = puVar8;
                      return;
                    }
                    pcVar12 = netsend_readbin;
                    uVar15 = extraout_XMM0_Qa_08;
                  }
                  else {
                    iVar4 = listen(iVar4,5);
                    if (iVar4 < 0) {
                      sys_sockerror(extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,"listen");
                      sys_closesocket(*(int *)(param_9 + 0x48));
                      *(undefined4 *)(param_9 + 0x48) = 0xffffffff;
                      return;
                    }
                    iVar4 = *(int *)(param_9 + 0x48);
                    pcVar12 = netreceive_connectpoll;
                    uVar15 = extraout_XMM0_Qa_09;
                  }
                  sys_addpollfn(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,iVar4
                                ,pcVar12,param_9);
                  return;
                }
              }
            }
            sys_closesocket(iVar4);
          }
          paVar13 = paVar13->ai_next;
        } while (paVar13 != (addrinfo *)0x0);
        paVar13 = local_430;
      }
      freeaddrinfo(paVar13);
      uVar3 = socket_errno();
      ppaVar6 = local_418;
      uVar15 = socket_strerror(uVar3,(char *)ppaVar6,1000);
      pcVar10 = "netreceive: listen failed: %s (%d)";
    }
    else {
      ppaVar6 = (addrinfo **)gai_strerror(uVar3);
      pcVar10 = "netreceive: bad host or port? %s (%d)";
      uVar15 = extraout_XMM0_Qa;
    }
    pd_error(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar10,ppaVar6,
             (ulong)uVar3,param_13,param_14);
  }
  return;
}


