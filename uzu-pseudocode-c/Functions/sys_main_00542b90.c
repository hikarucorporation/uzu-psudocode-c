// Function : sys_main
// Namespace: 
// Entry    : 00542b90
// Prototype: undefined4 sys_main(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, undefined8 param_7, char * param_8, undefined8 * param_9, undefined8 param_10, FILE * param_11, char * param_12, FILE * param_13)
// Body     : 00542b90 - 0054355d


/* WARNING: Removing unreachable block (ram,0x005434d1) */
/* WARNING: Removing unreachable block (ram,0x005434e2) */

undefined4
sys_main(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5,
        double param_6,undefined8 param_7,char *param_8,undefined8 *param_9,undefined8 param_10,
        FILE *param_11,char *param_12,FILE *param_13)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  __uid_t _Var15;
  __uid_t _Var16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined8 uVar22;
  size_t sVar23;
  long *plVar24;
  undefined8 *puVar25;
  uint *puVar26;
  int *piVar27;
  void *pvVar28;
  ulong uVar29;
  char **ppcVar30;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar31;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  ulong uVar32;
  char **ppcVar33;
  ulong uVar34;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar35;
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
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  uint local_864;
  uint local_860;
  int local_85c;
  undefined *local_858;
  ulong local_850;
  char *local_848 [8];
  undefined8 local_808;
  char acStack_800 [8];
  undefined1 auStack_7f8 [954];
  undefined1 local_43e;
  undefined2 local_418 [500];
  
  uVar29 = (ulong)param_8 & 0xffffffff;
  iVar18 = (int)param_8;
  *(undefined4 *)PTR_sys_externalschedlib_00715868 = 0;
  puVar25 = param_9;
  _Var15 = getuid();
  _Var16 = geteuid();
  puVar3 = PTR_stderr_00715948;
  if (_Var15 != _Var16) {
    param_11 = *(FILE **)PTR_stderr_00715948;
    puVar25 = (undefined8 *)0x24;
    fwrite("warning: canceling setuid privilege\n",0x24,1,param_11);
    _Var15 = getuid();
    param_8 = (char *)(ulong)_Var15;
    iVar17 = setuid(_Var15);
    if (iVar17 < 0) {
      fwrite("\n\nFATAL: could not cancel setuid privilege",0x2a,1,*(FILE **)puVar3);
      fwrite("\nTo fix this, please remove the setuid flag from the Pd binary",0x3e,1,
             *(FILE **)puVar3);
      if (0 < iVar18) {
        fwrite("\ne.g. by running the following as root/superuser:",0x31,1,*(FILE **)puVar3);
        fprintf(*(FILE **)puVar3,"\n chmod u-s \'%s\'",(char *)*param_9);
      }
      fwrite(&DAT_00658930,2,1,*(FILE **)puVar3);
      perror("setuid");
      return 1;
    }
  }
  uVar20 = socket_init();
  uVar22 = extraout_RDX;
  uVar35 = extraout_XMM0_Qa;
  if ((int)uVar20 != 0) {
    param_8 = "socket_init()";
    uVar35 = sys_sockerror(extraout_XMM0_Qa,param_2,in_XMM2._0_8_,param_3,param_4,param_5,param_6,
                           param_7,"socket_init()");
    uVar22 = extraout_RDX_00;
    param_2 = extraout_XMM1_Qa;
  }
  pd_init(uVar35,param_2,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7,param_8,puVar25,
          uVar22,param_11,param_12,param_13);
  sys_findprogdir((char *)*param_9);
  pcVar21 = getcwd((char *)local_418,1000);
  if (pcVar21 == (char *)0x0) {
    local_418[0] = 0x2e;
    if (0 < iVar18) goto LAB_00542c0e;
LAB_00542d4a:
    sys_loadpreferences();
  }
  else {
    if (iVar18 < 1) goto LAB_00542d4a;
LAB_00542c0e:
    uVar34 = 0;
    local_858 = &DAT_005e2ee7;
    local_85c = 0;
    local_850 = uVar29;
    do {
      pcVar21 = (char *)param_9[uVar34];
      iVar17 = strcmp(pcVar21,"-noprefs");
      if (iVar17 == 0) {
        local_85c = 1;
      }
      else {
        iVar17 = strcmp(pcVar21,"-prefsfile");
        if ((iVar17 == 0) && (uVar34 < iVar18 - 1)) {
          local_858 = (undefined *)param_9[uVar34 + 1];
        }
        else {
          iVar17 = strcmp(pcVar21,"-schedlib");
          if ((iVar17 == 0) && (uVar34 < iVar18 - 1)) {
            *(undefined4 *)PTR_sys_externalschedlib_00715868 = 1;
          }
          else {
            iVar17 = strcmp(pcVar21,"-h");
            if ((iVar17 == 0) || (iVar17 = strcmp(pcVar21,"-help"), iVar17 == 0)) {
              puVar3 = PTR_stderr_00715948;
              lVar31 = 0;
              do {
                fputs(*(char **)((long)&usagemessage + lVar31),*(FILE **)puVar3);
                fflush(*(FILE **)puVar3);
                lVar31 = lVar31 + 8;
              } while (lVar31 != 0x240);
              return 1;
            }
          }
        }
      }
      uVar34 = uVar34 + 1;
    } while (uVar29 != uVar34);
    iVar18 = (int)local_850;
    if (local_85c == 0) goto LAB_00542d4a;
  }
  uVar22 = sys_argparse(iVar18 - 1,param_9 + 1);
  puVar13 = PTR_sys_verbose_00715ce0;
  puVar3 = PTR_stderr_00715948;
  if ((int)uVar22 != 0) {
    return 1;
  }
  if ((*(int *)PTR_sys_verbose_00715ce0 != 0) || ((sys_version & 1) != 0)) {
    param_12 = PTR_pd_compiledate_007153f0;
    fprintf(*(FILE **)PTR_stderr_00715948,"%s compiled %s %s\n",*(char **)PTR_pd_version_00715878,
            PTR_pd_compiletime_00715d38,PTR_pd_compiledate_007153f0);
    if (*(int *)puVar13 != 0) {
      fprintf(*(FILE **)puVar3,"float precision = %lu bits\n",0x20);
    }
    if (sys_version == 1) {
      fflush(*(FILE **)puVar3);
      return 0;
    }
  }
  sys_setsignalhandlers();
  puVar25 = (undefined8 *)PTR_sys_libdir_00715520;
  pcVar21 = (char *)&local_808;
  strncpy(pcVar21,(char *)**(undefined8 **)PTR_sys_libdir_00715520,0x3ca);
  local_43e = 0;
  sVar23 = strlen(pcVar21);
  *(undefined4 *)((long)local_848 + sVar23 + 0x40) = 0x7478652f;
  *(undefined4 *)((long)local_848 + sVar23 + 0x43) = 0x617274;
  sys_setextrapath(pcVar21);
  strncpy(pcVar21,*(char **)*puVar25,0x3ca);
  local_43e = 0;
  sVar23 = strlen(pcVar21);
  *(undefined8 *)((long)local_848 + sVar23 + 0x40) = s__doc_5_reference_00659405._0_8_;
  *(undefined8 *)(acStack_800 + sVar23) = s__doc_5_reference_00659405._8_8_;
  auStack_7f8[sVar23] = 0;
  plVar24 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar22 = namelist_append_files(*(undefined8 **)(*(long *)(*plVar24 + 0x50) + 0x18),(long)pcVar21);
  puVar3 = *(undefined **)(*plVar24 + 0x50);
  *(undefined8 *)(puVar3 + 0x18) = uVar22;
  uVar22 = extraout_XMM1_Qa_00;
  uVar35 = extraout_XMM0_Qa_00;
  if ((sys_dontstartgui == '\0') &&
     (uVar20 = sys_startgui(extraout_XMM0_Qa_00,extraout_XMM1_Qa_00,in_XMM2._0_8_,param_3,param_4,
                            param_5,param_6,param_7,*(FILE **)*puVar25,pcVar21,extraout_RDX_01,
                            puVar3,param_12,param_13), uVar35 = extraout_XMM0_Qa_01,
     (int)uVar20 != 0)) {
    return 1;
  }
  if (sys_listplease == '\x01') {
    sys_listdevs(uVar35,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7);
  }
  puVar13 = PTR_sys_midiindevlist_00715d10;
  puVar3 = PTR_sys_nmidiin_00715848;
  local_860 = 0;
  local_864 = 0;
  uVar2 = *(uint *)PTR_sys_nmidiin_00715848;
  if (0 < (int)uVar2) {
    if (uVar2 < 8) {
      uVar29 = 0;
    }
    else {
      uVar29 = (ulong)(uVar2 & 0xfffffff8);
      uVar34 = (uVar29 - 8 >> 3) + 1;
      if (uVar29 - 8 == 0) {
        lVar31 = 0;
LAB_00542f30:
        puVar13 = PTR_sys_midiindevlist_00715d10;
        piVar27 = (int *)(PTR_sys_midiindevlist_00715d10 + lVar31 * 4);
        iVar18 = piVar27[1];
        iVar17 = piVar27[2];
        iVar7 = piVar27[3];
        piVar1 = (int *)(PTR_sys_midiindevlist_00715d10 + lVar31 * 4 + 0x10);
        iVar8 = *piVar1;
        iVar9 = piVar1[1];
        iVar10 = piVar1[2];
        iVar11 = piVar1[3];
        piVar1 = (int *)(PTR_sys_midiindevlist_00715d10 + lVar31 * 4);
        *piVar1 = *piVar27 + -1;
        piVar1[1] = iVar18 + -1;
        piVar1[2] = iVar17 + -1;
        piVar1[3] = iVar7 + -1;
        piVar27 = (int *)(puVar13 + lVar31 * 4 + 0x10);
        *piVar27 = iVar8 + -1;
        piVar27[1] = iVar9 + -1;
        piVar27[2] = iVar10 + -1;
        piVar27[3] = iVar11 + -1;
      }
      else {
        uVar32 = uVar34 & 0xfffffffffffffffe;
        lVar31 = 0;
        do {
          piVar1 = (int *)(puVar13 + lVar31 * 4);
          iVar18 = piVar1[1];
          iVar17 = piVar1[2];
          iVar7 = piVar1[3];
          piVar27 = (int *)(puVar13 + lVar31 * 4 + 0x10);
          iVar8 = *piVar27;
          iVar9 = piVar27[1];
          iVar10 = piVar27[2];
          iVar11 = piVar27[3];
          piVar27 = (int *)(puVar13 + lVar31 * 4);
          *piVar27 = *piVar1 + -1;
          piVar27[1] = iVar18 + -1;
          piVar27[2] = iVar17 + -1;
          piVar27[3] = iVar7 + -1;
          piVar27 = (int *)(puVar13 + lVar31 * 4 + 0x10);
          *piVar27 = iVar8 + -1;
          piVar27[1] = iVar9 + -1;
          piVar27[2] = iVar10 + -1;
          piVar27[3] = iVar11 + -1;
          piVar27 = (int *)(puVar13 + lVar31 * 4 + 0x20);
          iVar18 = piVar27[1];
          iVar17 = piVar27[2];
          iVar7 = piVar27[3];
          piVar1 = (int *)(puVar13 + lVar31 * 4 + 0x30);
          in_XMM2._0_4_ = *piVar1 + -1;
          in_XMM2._4_4_ = piVar1[1] + -1;
          in_XMM2._8_4_ = piVar1[2] + -1;
          in_XMM2._12_4_ = piVar1[3] + -1;
          piVar1 = (int *)(puVar13 + lVar31 * 4 + 0x20);
          *piVar1 = *piVar27 + -1;
          piVar1[1] = iVar18 + -1;
          piVar1[2] = iVar17 + -1;
          piVar1[3] = iVar7 + -1;
          *(undefined1 (*) [16])(puVar13 + lVar31 * 4 + 0x30) = in_XMM2;
          lVar31 = lVar31 + 0x10;
          uVar32 = uVar32 - 2;
        } while (uVar32 != 0);
        if ((uVar34 & 1) != 0) goto LAB_00542f30;
      }
      puVar13 = PTR_sys_midiindevlist_00715d10;
      if (uVar29 == uVar2) goto LAB_00542f7d;
    }
    do {
      *(int *)(puVar13 + uVar29 * 4) = *(int *)(puVar13 + uVar29 * 4) + -1;
      uVar29 = uVar29 + 1;
    } while (uVar2 != uVar29);
  }
LAB_00542f7d:
  puVar14 = PTR_sys_midioutdevlist_00715768;
  puVar13 = PTR_sys_nmidiout_007155a0;
  uVar2 = *(uint *)PTR_sys_nmidiout_007155a0;
  if ((int)uVar2 < 1) goto LAB_0054305d;
  if (uVar2 < 8) {
    uVar29 = 0;
  }
  else {
    uVar29 = (ulong)(uVar2 & 0xfffffff8);
    uVar34 = (uVar29 - 8 >> 3) + 1;
    if (uVar29 - 8 == 0) {
      lVar31 = 0;
LAB_0054301e:
      puVar14 = PTR_sys_midioutdevlist_00715768;
      piVar27 = (int *)(PTR_sys_midioutdevlist_00715768 + lVar31 * 4);
      iVar18 = piVar27[1];
      iVar17 = piVar27[2];
      iVar7 = piVar27[3];
      piVar1 = (int *)(PTR_sys_midioutdevlist_00715768 + lVar31 * 4 + 0x10);
      iVar8 = *piVar1;
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      piVar1 = (int *)(PTR_sys_midioutdevlist_00715768 + lVar31 * 4);
      *piVar1 = *piVar27 + -1;
      piVar1[1] = iVar18 + -1;
      piVar1[2] = iVar17 + -1;
      piVar1[3] = iVar7 + -1;
      piVar27 = (int *)(puVar14 + lVar31 * 4 + 0x10);
      *piVar27 = iVar8 + -1;
      piVar27[1] = iVar9 + -1;
      piVar27[2] = iVar10 + -1;
      piVar27[3] = iVar11 + -1;
    }
    else {
      uVar32 = uVar34 & 0xfffffffffffffffe;
      lVar31 = 0;
      do {
        piVar27 = (int *)(puVar14 + lVar31 * 4);
        iVar18 = piVar27[1];
        iVar17 = piVar27[2];
        iVar7 = piVar27[3];
        piVar1 = (int *)(puVar14 + lVar31 * 4 + 0x10);
        iVar8 = *piVar1;
        iVar9 = piVar1[1];
        iVar10 = piVar1[2];
        iVar11 = piVar1[3];
        piVar1 = (int *)(puVar14 + lVar31 * 4);
        *piVar1 = *piVar27 + -1;
        piVar1[1] = iVar18 + -1;
        piVar1[2] = iVar17 + -1;
        piVar1[3] = iVar7 + -1;
        piVar27 = (int *)(puVar14 + lVar31 * 4 + 0x10);
        *piVar27 = iVar8 + -1;
        piVar27[1] = iVar9 + -1;
        piVar27[2] = iVar10 + -1;
        piVar27[3] = iVar11 + -1;
        piVar27 = (int *)(puVar14 + lVar31 * 4 + 0x20);
        iVar18 = piVar27[1];
        iVar17 = piVar27[2];
        iVar7 = piVar27[3];
        piVar1 = (int *)(puVar14 + lVar31 * 4 + 0x30);
        in_XMM2._0_4_ = *piVar1 + -1;
        in_XMM2._4_4_ = piVar1[1] + -1;
        in_XMM2._8_4_ = piVar1[2] + -1;
        in_XMM2._12_4_ = piVar1[3] + -1;
        piVar1 = (int *)(puVar14 + lVar31 * 4 + 0x20);
        *piVar1 = *piVar27 + -1;
        piVar1[1] = iVar18 + -1;
        piVar1[2] = iVar17 + -1;
        piVar1[3] = iVar7 + -1;
        *(undefined1 (*) [16])(puVar14 + lVar31 * 4 + 0x30) = in_XMM2;
        lVar31 = lVar31 + 0x10;
        uVar32 = uVar32 - 2;
      } while (uVar32 != 0);
      if ((uVar34 & 1) != 0) goto LAB_0054301e;
    }
    puVar14 = PTR_sys_midioutdevlist_00715768;
    if (uVar29 == uVar2) goto LAB_0054305d;
  }
  do {
    *(int *)(puVar14 + uVar29 * 4) = *(int *)(puVar14 + uVar29 * 4) + -1;
    uVar29 = uVar29 + 1;
  } while (uVar2 != uVar29);
LAB_0054305d:
  sys_get_midi_params(&local_860,&local_808,&local_864);
  uVar2 = *(uint *)puVar3;
  if ((-1 < (int)uVar2) && (local_860 = uVar2, uVar2 != 0)) {
    memcpy(&local_808,PTR_sys_midiindevlist_00715d10,(ulong)uVar2 << 2);
  }
  uVar2 = *(uint *)puVar13;
  if ((-1 < (int)uVar2) && (local_864 = uVar2, uVar2 != 0)) {
    memcpy(local_848,PTR_sys_midioutdevlist_00715768,(ulong)uVar2 * 4);
  }
  pcVar21 = (char *)&local_808;
  ppcVar30 = local_848;
  ppcVar33 = (char **)0x0;
  auVar36 = sys_open_midi();
  sys_init_audio(auVar36._0_8_,auVar36._8_8_,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7);
  uVar22 = extraout_XMM1_Qa_01;
  uVar20 = sys_oktoloadfiles();
  uVar35 = extraout_XMM0_Qa_02;
  if ((int)uVar20 != 0) {
    plVar24 = (long *)__tls_get_addr();
    uVar35 = extraout_RDX_02;
    uVar20 = extraout_XMM0_Qa_03;
    uVar22 = extraout_XMM1_Qa_02;
    for (puVar4 = (undefined8 *)**(undefined8 **)(*plVar24 + 0x50); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      pcVar21 = (char *)puVar4[1];
      iVar18 = sys_load_lib(uVar20,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7,0,
                            pcVar21,uVar35,ppcVar30,(char *)ppcVar33,param_13);
      uVar35 = extraout_RDX_03;
      uVar20 = extraout_XMM0_Qa_04;
      if (iVar18 == 0) {
        pcVar21 = (char *)puVar4[1];
        uVar20 = post(extraout_XMM0_Qa_04,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6,
                      param_7,"%s: can\'t load library");
        uVar35 = extraout_RDX_04;
        uVar22 = extraout_XMM1_Qa_03;
      }
    }
    sys_oktoloadfiles();
    uVar35 = extraout_XMM0_Qa_05;
  }
  auVar36._8_8_ = uVar22;
  auVar36._0_8_ = uVar35;
  if (sys_openlist != (long *)0x0) {
    plVar24 = sys_openlist;
    do {
      while( true ) {
        ppcVar30 = (char **)&local_808;
        pcVar5 = (char *)plVar24[1];
        pbVar6 = (byte *)plVar24[2];
        ppcVar33 = local_848;
        param_13 = (FILE *)0x3e8;
        iVar18 = open_via_path(auVar36._0_8_,auVar36._8_8_,in_XMM2._0_8_,param_3,param_4,param_5,
                               param_6,param_7,(char *)local_418,pcVar5,"",(char *)ppcVar30,ppcVar33
                               ,1000);
        if (iVar18 < 0) break;
        uVar22 = extraout_XMM1_Qa_04;
        close(iVar18);
        if ((pbVar6 != (byte *)0x0) && (*pbVar6 != 0)) {
          puVar26 = binbuf_new();
          piVar27 = binbuf_new();
          sVar23 = strlen((char *)pbVar6);
          uVar22 = binbuf_text(extraout_XMM0_Qa_09,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,
                               param_6,param_7,puVar26,pbVar6,sVar23);
          binbuf_addbinbuf(uVar22,extraout_XMM1_Qa_05,in_XMM2._0_8_,param_3,param_4,param_5,param_6,
                           param_7,piVar27,puVar26,extraout_RDX_05,(ulong)ppcVar30,(char *)ppcVar33,
                           param_13);
          uVar22 = extraout_XMM1_Qa_06;
          iVar18 = binbuf_getnatom(piVar27);
          pvVar28 = (void *)binbuf_getvec((long)piVar27);
          canvas_setargs(extraout_XMM0_Qa_10,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6,
                         param_7,iVar18,pvVar28);
          binbuf_free(puVar26);
          binbuf_free(piVar27);
          uVar22 = extraout_XMM1_Qa_07;
        }
        pcVar21 = (char *)gensym(local_848[0]);
        puVar25 = gensym((char *)&local_808);
        glob_evalfile(extraout_XMM0_Qa_06,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6,
                      param_7,0,(undefined **)pcVar21,puVar25,ppcVar30,(char *)ppcVar33,
                      (undefined8 *)param_13);
        auVar36._8_8_ = uVar22;
        auVar36._0_8_ = extraout_XMM0_Qa_07;
        plVar24 = (long *)*plVar24;
        puVar3 = PTR_sys_libdir_00715520;
        plVar12 = sys_openlist;
        if (plVar24 == (long *)0x0) goto joined_r0x00543371;
      }
      pcVar21 = "%s: can\'t open";
      auVar36 = pd_error(extraout_XMM0_Qa_08,extraout_XMM1_Qa_04,in_XMM2._0_8_,param_3,param_4,
                         param_5,param_6,param_7,0,"%s: can\'t open",pcVar5,ppcVar30,
                         (char *)ppcVar33,param_13);
      uVar22 = auVar36._8_8_;
      plVar24 = (long *)*plVar24;
      puVar3 = PTR_sys_libdir_00715520;
      plVar12 = sys_openlist;
    } while (plVar24 != (long *)0x0);
joined_r0x00543371:
    while (puVar13 = PTR_sys_libdir_00715520, puVar25 = (undefined8 *)PTR_sys_libdir_00715520,
          PTR_sys_libdir_00715520 = puVar3, plVar12 != (long *)0x0) {
      plVar24 = (long *)*plVar12;
      pcVar21 = (char *)plVar12[1];
      strlen(pcVar21);
      freebytes(pcVar21);
      pcVar21 = (char *)plVar12[2];
      if (pcVar21 != (char *)0x0) {
        strlen(pcVar21);
        freebytes(pcVar21);
      }
      pcVar21 = (char *)0x18;
      freebytes(plVar12);
      uVar22 = extraout_XMM1_Qa_09;
      puVar3 = PTR_sys_libdir_00715520;
      plVar12 = plVar24;
      PTR_sys_libdir_00715520 = puVar13;
    }
  }
  sys_openlist = (long *)0x0;
  plVar24 = sys_messagelist;
  if (sys_messagelist == (long *)0x0) {
    plVar24 = (long *)0x0;
  }
  else {
    do {
      puVar26 = binbuf_new();
      pbVar6 = (byte *)plVar24[1];
      sVar23 = strlen((char *)pbVar6);
      auVar36 = binbuf_text(extraout_XMM0_Qa_11,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6
                            ,param_7,puVar26,pbVar6,sVar23);
      pcVar21 = (char *)0x0;
      ppcVar30 = (char **)0x0;
      binbuf_eval(auVar36._0_8_,auVar36._8_8_,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7,
                  puVar26,(uint *)0x0,0,0,ppcVar33,param_13);
      binbuf_free(puVar26);
      plVar24 = (long *)*plVar24;
      uVar22 = extraout_XMM1_Qa_08;
    } while (plVar24 != (long *)0x0);
    plVar24 = sys_messagelist;
  }
  auVar36 = namelist_free(plVar24);
  sys_messagelist = (long *)0x0;
  if (*(int *)PTR_sys_hipriority_007154d8 != 0) {
    plVar24 = *(long **)*puVar25;
    auVar36 = sys_setrealtime();
  }
  uVar22 = auVar36._8_8_;
  if (*(int *)PTR_sys_externalschedlib_00715868 == 0) {
    if (sys_batch == '\x01') {
      uVar19 = m_batchmain();
      uVar35 = extraout_RDX_07;
      uVar20 = extraout_XMM0_Qa_13;
    }
    else {
      uVar19 = m_mainloop(auVar36._0_8_,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7
                         );
      uVar35 = extraout_RDX_08;
      uVar20 = extraout_XMM0_Qa_14;
    }
  }
  else {
    pcVar21 = *(char **)PTR_pd_extraflags_00715c80;
    plVar24 = (long *)PTR_sys_externalschedlibname_00715408;
    uVar19 = sys_run_scheduler(auVar36._0_8_,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6,
                               param_7,PTR_sys_externalschedlibname_00715408,pcVar21);
    uVar35 = extraout_RDX_06;
    uVar20 = extraout_XMM0_Qa_12;
  }
  uVar22 = sys_stopgui(uVar20,uVar22,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7,plVar24,
                       pcVar21,uVar35,(undefined *)ppcVar30,(char *)ppcVar33,(undefined *)param_13);
  pd_term(uVar22,extraout_XMM1_Qa_10,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7,plVar24,
          pcVar21,extraout_RDX_09,ppcVar30,ppcVar33,param_13);
  return uVar19;
}


