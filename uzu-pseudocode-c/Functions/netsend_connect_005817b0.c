// Function : netsend_connect
// Namespace: 
// Entry    : 005817b0
// Prototype: undefined netsend_connect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 005817b0 - 00581bfa


void netsend_connect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                    char *param_13,ulong param_14)

{
  addrinfo **ppaVar1;
  bool bVar2;
  uint __ecode;
  int __fd;
  int iVar3;
  int *piVar4;
  undefined7 extraout_var;
  undefined8 *puVar5;
  ulong uVar6;
  addrinfo *paVar7;
  char *pcVar8;
  char *pcVar9;
  addrinfo *paVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined1 in_stack_fffffffffffffbc8;
  addrinfo *local_430;
  int local_424;
  addrinfo *local_420;
  char local_418 [1000];
  
  local_430 = (addrinfo *)0x0;
  if ((((int)(uint)param_11 < 2) || (*param_12 != 2)) || (param_12[4] != 1)) {
LAB_00581800:
    pcVar8 = "netsend: bad connect arguments";
  }
  else {
    uVar13 = 0;
    if (2 < (uint)param_11) {
      if (param_12[8] != 1) goto LAB_00581800;
      uVar13 = (uint)(float)param_12[10];
    }
    if (*(int *)(param_9 + 0x48) < 0) {
      pcVar8 = (char *)**(undefined8 **)(param_12 + 2);
      uVar12 = (uint)(float)param_12[6];
      uVar6 = (ulong)*(uint *)(param_9 + 0x4c);
      __ecode = addrinfo_get_list(&local_430,pcVar8,(ulong)uVar12,*(uint *)(param_9 + 0x4c));
      if (__ecode == 0) {
        addrinfo_sort_list((long *)&local_430,PTR_addrinfo_ipv4_first_00715558);
        paVar10 = local_430;
        if (local_430 == (addrinfo *)0x0) {
          paVar10 = (addrinfo *)0x0;
        }
        else {
          do {
            __fd = socket(paVar10->ai_family,paVar10->ai_socktype,paVar10->ai_protocol);
            if (-1 < __fd) {
              iVar3 = fcntl(__fd,2,1);
              if (iVar3 < 0) {
                piVar4 = __errno_location();
                pcVar9 = strerror(*piVar4);
                pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,param_9,"netsend: CLOEXEC failed: %s",
                         pcVar9,uVar6,param_13,param_14);
              }
              if (*(int *)(param_9 + 0x4c) == 1) {
                iVar3 = socket_set_boolopt(__fd,6,1);
                local_424 = 0;
                if (iVar3 < 0) {
                  local_424 = 0;
                  post(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,"netsend: setsockopt (TCP_NODELAY) failed");
                }
              }
              else {
                iVar3 = socket_set_boolopt(__fd,1,6);
                if (iVar3 < 0) {
                  post(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,"netsend: setsockopt (SO_BROADCAST) failed");
                }
                bVar2 = sockaddr_is_multicast((short *)paVar10->ai_addr);
                local_424 = (int)CONCAT71(extraout_var,bVar2);
              }
              if (paVar10->ai_family == 10) {
                socket_set_boolopt(__fd,0x29,0x1a);
              }
              sockaddr_get_addrstr((short *)paVar10->ai_addr,local_418,0x100);
              if (uVar13 != 0) {
                local_420 = (addrinfo *)0x0;
                pcVar8 = (char *)(ulong)uVar12;
                param_14 = (ulong)uVar13;
                logpost(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,0,4,"connecting to %s %d, src port %d",
                        local_418,pcVar8,param_14,in_stack_fffffffffffffbc8);
                uVar13 = addrinfo_get_list(&local_420,(char *)0x0,(ulong)uVar13,
                                           *(int *)(param_9 + 0x4c));
                if (uVar13 != 0) {
                  pcVar9 = gai_strerror(uVar13);
                  pd_error(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,param_9,
                           "netsend: could not set src port: %s (%d)",pcVar9,(ulong)uVar13,pcVar8,
                           param_14);
                  freeaddrinfo(local_420);
                  goto LAB_00581b39;
                }
                addrinfo_sort_list((long *)&local_420,PTR_addrinfo_ipv6_first_00715d58);
                paVar7 = local_420;
                if (local_420 != (addrinfo *)0x0) goto LAB_00581a96;
                paVar10 = (addrinfo *)0x0;
                goto LAB_00581b28;
              }
              if ((pcVar8 == (char *)0x0) || (local_424 == 0)) {
                pcVar9 = "connecting to %s %d";
              }
              else {
                pcVar9 = "connecting to %s %d (multicast)";
              }
              pcVar8 = (char *)(ulong)uVar12;
              logpost(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,4,pcVar9,local_418,pcVar8,param_14,
                      in_stack_fffffffffffffbc8);
              if (*(int *)(param_9 + 0x4c) == 1) goto LAB_00581add;
              goto LAB_00581b6d;
            }
            ppaVar1 = &paVar10->ai_next;
            paVar10 = *ppaVar1;
          } while (*ppaVar1 != (addrinfo *)0x0);
          paVar10 = local_430;
        }
        freeaddrinfo(paVar10);
        __ecode = socket_errno();
        pcVar8 = local_418;
        uVar14 = socket_strerror(__ecode,pcVar8,1000);
        pcVar9 = "netsend: connect failed: %s (%d)";
      }
      else {
        pcVar8 = gai_strerror(__ecode);
        uVar14 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        pcVar9 = "netsend: bad host or port? %s (%d)";
      }
      pd_error(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar9,pcVar8,
               (ulong)__ecode,param_13,param_14);
      return;
    }
    pcVar8 = "netsend: already connected";
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar8,param_11,
           param_12,param_13,param_14);
  return;
LAB_00581a96:
  if (((paVar7->ai_family != 10) || (iVar3 = socket_set_boolopt(__fd,0x29,0x1a), -1 < iVar3)) &&
     (iVar3 = bind(__fd,paVar7->ai_addr,paVar7->ai_addrlen), -1 < iVar3)) {
    freeaddrinfo(local_420);
    if (*(int *)(param_9 + 0x4c) != 1) goto LAB_00581b6d;
LAB_00581add:
    uVar14 = socket_connect(*(float *)(param_9 + 0xe0),__fd,paVar10->ai_addr,paVar10->ai_addrlen);
    if ((int)uVar14 < 0) {
      sys_sockerror(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,"connecting stream socket");
      sys_closesocket(__fd);
      freeaddrinfo(local_430);
      plVar11 = *(long **)(param_9 + 0x18);
      uVar13 = 0;
    }
    else {
LAB_00581b6d:
      memcpy((void *)(param_9 + 0x60),paVar10->ai_addr,(ulong)paVar10->ai_addrlen);
      freeaddrinfo(local_430);
      *(int *)(param_9 + 0x48) = __fd;
      if (*(long *)(param_9 + 0x30) != 0) {
        if (*(int *)(param_9 + 0x50) == 0) {
          puVar5 = socketreceiver_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,
                                      param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                      netsend_notify,netsend_read,
                                      (ulong)(*(int *)(param_9 + 0x4c) == 2),pcVar8,param_14);
          sys_addpollfn(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,*(int *)(param_9 + 0x48),
                        PTR_socketreceiver_read_00715498,puVar5);
          *(undefined8 **)(param_9 + 0x58) = puVar5;
        }
        else {
          sys_addpollfn(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,__fd,netsend_readbin,param_9);
        }
      }
      plVar11 = *(long **)(param_9 + 0x18);
      uVar13 = DAT_005d9038;
    }
    outlet_float((ulong)uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar11);
    return;
  }
  paVar7 = paVar7->ai_next;
  if (paVar7 == (addrinfo *)0x0) {
    paVar10 = local_420;
LAB_00581b28:
    freeaddrinfo(paVar10);
    sys_sockerror(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,"setting source port");
LAB_00581b39:
    freeaddrinfo(local_430);
    if (0 < __fd) {
      sys_closesocket(__fd);
    }
    return;
  }
  goto LAB_00581a96;
}


