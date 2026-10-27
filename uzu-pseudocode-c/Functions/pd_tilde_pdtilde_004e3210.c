// Function : pd_tilde_pdtilde
// Namespace: 
// Entry    : 004e3210
// Prototype: undefined pd_tilde_pdtilde(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, FILE * param_12, char * param_13, undefined8 param_14, double param_15)
// Body     : 004e3210 - 004e3c1b


void pd_tilde_pdtilde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,int param_11,FILE *param_12,char *param_13,
                     undefined8 param_14,double param_15)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  __pid_t _Var4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  size_t sVar9;
  undefined **ppuVar10;
  FILE *pFVar11;
  FILE *pFVar12;
  FILE *pFVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  long lVar14;
  long *plVar15;
  char *pcVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined4 extraout_XMM0_Db_17;
  undefined1 in_stack_ffffffffffffe758;
  uint local_18a4;
  int local_18a0;
  int local_189c;
  int local_1898;
  int local_1894;
  FILE *local_1890;
  undefined8 *local_1888;
  long local_1880;
  int local_1878;
  undefined4 local_1874;
  undefined8 local_1870;
  char local_1868 [32];
  char local_1848 [32];
  char local_1828 [48];
  stat local_17f8;
  char *local_1768;
  char *local_1760;
  char *local_1758;
  char *local_1750;
  FILE *local_1748;
  char *local_1740;
  char *local_1738;
  char *local_1730;
  char *local_1728;
  char *local_1720;
  char *local_1718;
  undefined *local_1710;
  char *local_1708;
  void *local_1700;
  long local_16f8 [100];
  char local_13d8 [1008];
  char local_fe8 [1008];
  char local_bf8 [1008];
  char local_808 [1008];
  char local_418 [1000];
  
  local_1890 = param_12;
  if ((param_11 < 1) || (param_12->_flags != 2)) {
    pcVar16 = (char *)gensym("?");
    pcVar5 = (char *)gensym("start");
    uVar18 = extraout_RDX_01;
    uVar17 = extraout_XMM0_Da_02;
    uVar19 = extraout_XMM0_Db_02;
    if (pcVar16 != pcVar5) goto LAB_004e33f1;
  }
  else {
    pcVar16 = param_12->_IO_read_ptr;
    pcVar5 = (char *)gensym("start");
    uVar18 = extraout_RDX;
    uVar17 = extraout_XMM0_Da;
    uVar19 = extraout_XMM0_Db;
    if (pcVar16 != pcVar5) {
LAB_004e33f1:
      pcVar5 = (char *)gensym("stop");
      if (pcVar16 == pcVar5) {
        pFVar13 = *(FILE **)(param_9 + 0x48);
        if (pFVar13 == (FILE *)0x0) {
          return;
        }
        pFVar11 = *(FILE **)(param_9 + 0x50);
        *(undefined8 *)(param_9 + 0x48) = 0;
        *(undefined8 *)(param_9 + 0x50) = 0;
        if (pFVar11 != (FILE *)0x0) {
          fclose(pFVar11);
        }
        fclose(pFVar13);
        uVar17 = extraout_XMM0_Da_05;
        uVar19 = extraout_XMM0_Db_05;
        if (0 < *(__pid_t *)(param_9 + 0x60)) {
          waitpid(*(__pid_t *)(param_9 + 0x60),(int *)0x0,0);
          uVar17 = extraout_XMM0_Da_06;
          uVar19 = extraout_XMM0_Db_06;
        }
        binbuf_clear(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                     ,*(int **)(param_9 + 0x58));
        *(undefined8 *)(param_9 + 0x48) = 0;
        *(undefined8 *)(param_9 + 0x50) = 0;
        *(undefined4 *)(param_9 + 0x60) = 0xffffffff;
        return;
      }
      pcVar5 = (char *)gensym("pddir");
      if (pcVar16 == pcVar5) {
        if ((1 < param_11) && (*(int *)&local_1890->_IO_read_end == 2)) {
          *(char **)(param_9 + 0x78) = local_1890->_IO_read_base;
          return;
        }
        pcVar16 = "pd~ pddir: needs symbol argument";
        uVar18 = extraout_RDX_02;
        uVar17 = extraout_XMM0_Da_03;
        uVar19 = extraout_XMM0_Db_03;
      }
      else {
        pcVar5 = (char *)gensym("vis");
        if (pcVar16 != pcVar5) {
          pd_error(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,param_9,"pd~: unknown control message: %s",
                   *(undefined8 *)pcVar16,param_12,param_13,param_14);
          return;
        }
        if ((1 < param_11) && (*(int *)&local_1890->_IO_read_end == 1)) {
          local_1890 = (FILE *)CONCAT44(local_1890._4_4_,*(undefined4 *)&local_1890->_IO_read_base);
          puVar6 = gensym("pd");
          if (local_1890._0_4_ == 0.0) {
            pd_vmess(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar6,
                     0x6552a4,pcVar16,param_13,param_14,param_15);
            return;
          }
          pd_vmess(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar6,0x65470c
                   ,pcVar16,*(undefined8 *)(param_9 + 0x78),param_14,param_15);
          return;
        }
        pcVar16 = "pd~ vis: needs float argument";
        uVar18 = extraout_RDX_03;
        uVar17 = extraout_XMM0_Da_04;
        uVar19 = extraout_XMM0_Db_04;
      }
      pd_error(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9,pcVar16,uVar18,param_12,param_13,param_14);
      return;
    }
  }
  puVar6 = (undefined8 *)(param_9 + 0x48);
  pFVar13 = *(FILE **)(param_9 + 0x48);
  if (pFVar13 != (FILE *)0x0) {
    pFVar11 = *(FILE **)(param_9 + 0x50);
    *puVar6 = 0;
    *(undefined8 *)(param_9 + 0x50) = 0;
    if (pFVar11 != (FILE *)0x0) {
      fclose(pFVar11);
    }
    fclose(pFVar13);
    uVar17 = extraout_XMM0_Da_00;
    uVar19 = extraout_XMM0_Db_00;
    if (0 < *(__pid_t *)(param_9 + 0x60)) {
      param_10 = 0;
      waitpid(*(__pid_t *)(param_9 + 0x60),(int *)0x0,0);
      uVar17 = extraout_XMM0_Da_01;
      uVar19 = extraout_XMM0_Db_01;
    }
    binbuf_clear(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(int **)(param_9 + 0x58));
    uVar17 = 0;
    uVar19 = 0;
    *puVar6 = 0;
    *(undefined8 *)(param_9 + 0x50) = 0;
    *(undefined4 *)(param_9 + 0x60) = 0xffffffff;
    uVar18 = extraout_RDX_00;
  }
  local_1888 = puVar6;
  puVar6 = (undefined8 *)
           canvas_getdir(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,*(long *)(param_9 + 0x40),param_10,uVar18,param_12,param_13,
                         param_14);
  local_1870 = *puVar6;
  puVar6 = *(undefined8 **)(param_9 + 0x80);
  puVar7 = gensym(".");
  if ((puVar6 == puVar7) &&
     (puVar7 = *(undefined8 **)(param_9 + 0x78), puVar8 = gensym("."), puVar7 != puVar8)) {
    pcVar16 = (char *)**(undefined8 **)(param_9 + 0x78);
    sVar9 = strlen(pcVar16);
    iVar3 = (int)sVar9;
    if (iVar3 < 4) {
LAB_004e3343:
      pcVar5 = "%s/extra/pd~";
    }
    else {
      iVar2 = strcmp(pcVar16 + (long)iVar3 + -3,"bin");
      pcVar5 = "%s/../extra/pd~";
      if ((iVar2 != 0) && (iVar3 = strcmp(pcVar16 + (long)iVar3 + -4,"bin/"), iVar3 != 0))
      goto LAB_004e3343;
    }
    snprintf(local_bf8,1000,pcVar5,pcVar16);
    puVar6 = gensym(local_bf8);
  }
  uVar18 = **(undefined8 **)(param_9 + 0x78);
  uVar1 = *puVar6;
  iVar3 = *(int *)(param_9 + 100);
  iVar2 = *(int *)(param_9 + 0x68);
  local_1878 = *(int *)(param_9 + 0x6c);
  local_1880 = CONCAT44(local_1880._4_4_,*(uint *)(param_9 + 0x74));
  *(undefined4 *)(param_9 + 0x60) = 0xffffffff;
  if (param_11 < 0x66) {
    local_18a4 = param_11 - 1;
  }
  else {
    local_18a4 = 100;
    post((ulong)*(uint *)(param_9 + 0x74),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "pd~: args truncated to %d items");
  }
  sprintf(local_1848,"%d",iVar3);
  sprintf(local_1868,"%d",iVar2);
  sprintf(local_1828,"%f",(double)(float)local_1880);
  pd_snprintf(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,local_13d8,1000,"%s/bin/pd",uVar18,param_13,param_14,
              in_stack_ffffffffffffe758);
  sys_bashfilename(local_13d8,local_fe8);
  iVar3 = stat(local_fe8,&local_17f8);
  uVar17 = extraout_XMM0_Da_08;
  uVar19 = extraout_XMM0_Db_08;
  if (iVar3 < 0) {
    pd_snprintf(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,local_13d8,1000,"%s/../../../bin/pd",uVar18,param_13,
                param_14,in_stack_ffffffffffffe758);
    sys_bashfilename(local_13d8,local_fe8);
    iVar3 = stat(local_fe8,&local_17f8);
    uVar17 = extraout_XMM0_Da_09;
    uVar19 = extraout_XMM0_Db_09;
    if (iVar3 < 0) {
      pd_snprintf(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,local_13d8,1000,"%s/pd",uVar18,param_13,param_14,
                  in_stack_ffffffffffffe758);
      sys_bashfilename(local_13d8,local_fe8);
      iVar3 = stat(local_fe8,&local_17f8);
      uVar17 = extraout_XMM0_Da_10;
      uVar19 = extraout_XMM0_Db_10;
      if (iVar3 < 0) {
        pcVar16 = local_fe8;
        goto LAB_004e367f;
      }
    }
  }
  local_1880 = param_9;
  ppuVar10 = sys_get_dllextensions
                       (CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,
                        param_8);
  if ((ppuVar10 == (undefined **)0x0) || (pcVar16 = *ppuVar10, pcVar16 == (char *)0x0)) {
    ppuVar10 = &pd_tilde_dllextent;
    pcVar16 = ".l_amd64";
  }
  uVar17 = extraout_XMM0_Da_11;
  uVar19 = extraout_XMM0_Db_11;
  while( true ) {
    ppuVar10 = ppuVar10 + 1;
    uVar18 = uVar1;
    pd_snprintf(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                local_13d8,1000,"%s/pdsched%s",uVar1,pcVar16,param_14,in_stack_ffffffffffffe758);
    sys_bashfilename(local_13d8,local_808);
    iVar3 = stat(local_808,&local_17f8);
    if (-1 < iVar3) break;
    pcVar16 = *ppuVar10;
    uVar17 = extraout_XMM0_Da_12;
    uVar19 = extraout_XMM0_Db_12;
    if (pcVar16 == (char *)0x0) goto code_r0x004e366b;
  }
  pd_snprintf(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_12),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,local_13d8,1000,"%s/pdsched",uVar1,pcVar16,param_14,
              in_stack_ffffffffffffe758);
  uVar18 = sys_bashfilename(local_13d8,local_808);
  uVar18 = pd_snprintf(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_bf8,1000
                       ,"%s",local_fe8,pcVar16,param_14,in_stack_ffffffffffffe758);
  uVar18 = pd_snprintf(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_418,1000
                       ,"%s",local_1870,pcVar16,param_14,in_stack_ffffffffffffe758);
  param_9 = local_1880;
  local_1760 = "-schedlib";
  local_1750 = "-extraflags";
  pFVar13 = (FILE *)&DAT_006532ca;
  if (*(int *)(local_1880 + 0x70) == 0) {
    pFVar13 = (FILE *)&DAT_005e4e5c;
  }
  local_1740 = "-path";
  local_1730 = "-inchannels";
  local_1728 = local_1848;
  local_1720 = "-outchannels";
  local_1718 = local_1868;
  local_1710 = &DAT_00652b44;
  local_1708 = local_1828;
  local_1768 = local_fe8;
  local_1758 = local_808;
  local_1748 = pFVar13;
  local_1738 = local_418;
  if (0 < (int)local_18a4) {
    lVar14 = 0;
    do {
      pFVar13 = local_1890;
      if (*(int *)(local_1890->_shortbuf + lVar14 * 2 + -0x73) == 1) {
        sprintf(local_13d8,"%f",(double)*(float *)(local_1890->_shortbuf + lVar14 * 2 + -0x6b));
      }
      else if (*(int *)(local_1890->_shortbuf + lVar14 * 2 + -0x73) == 2) {
        pFVar13 = (FILE *)**(undefined8 **)(local_1890->_shortbuf + lVar14 * 2 + -0x6b);
        pd_snprintf(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_13d8,1000,
                    "%s",pFVar13,pcVar16,param_14,in_stack_ffffffffffffe758);
      }
      sVar9 = strlen(local_13d8);
      pcVar5 = malloc(sVar9 + 1);
      *(char **)((long)local_16f8 + lVar14 + -8) = pcVar5;
      strcpy(pcVar5,local_13d8);
      uVar18 = CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_13);
      lVar14 = lVar14 + 8;
    } while ((ulong)local_18a4 * 8 != lVar14);
  }
  local_16f8[(long)(int)local_18a4 + -1] = 0;
  iVar3 = pipe(&local_1898);
  if (-1 < iVar3) {
    iVar3 = pipe(&local_18a0);
    if (iVar3 < 0) {
      pd_error(CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_15),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,"pd~: can\'t create pipe",extraout_RDX_05,pFVar13,
               pcVar16,param_14);
    }
    else {
      _Var4 = fork();
      iVar3 = local_1878;
      if (-1 < _Var4) {
        if (_Var4 == 0) {
          if (local_189c == 0) {
            local_189c = dup(0);
          }
          if (local_1898 != 0) {
            dup2(local_1898,0);
            close(local_1898);
          }
          if (local_189c != 1) {
            dup2(local_189c,1);
            close(local_189c);
          }
          if (1 < local_1894) {
            close(local_1894);
          }
          if (1 < local_18a0) {
            close(local_18a0);
          }
          execv(local_bf8,&local_1768);
                    /* WARNING: Subroutine does not return */
          _exit(1);
        }
        if (local_1700 != (void *)0x0) {
          plVar15 = local_16f8;
          do {
            free(local_1700);
            local_1700 = (void *)*plVar15;
            plVar15 = plVar15 + 1;
          } while (local_1700 != (void *)0x0);
        }
        close(local_1898);
        close(local_189c);
        fcntl(local_1894,2,1);
        fcntl(local_18a0,2,1);
        pFVar11 = fdopen(local_1894,"w");
        pFVar12 = fdopen(local_18a0,"r");
        *(__pid_t *)(param_9 + 0x60) = _Var4;
        if (0 < iVar3) {
          do {
            while (pFVar13 = pFVar11, *(int *)(param_9 + 0x70) != 0) {
              putc(4,pFVar11);
              local_1874 = 0;
              putc(1,pFVar11);
              fwrite(&local_1874,4,1,pFVar11);
              putc(4,pFVar11);
              iVar3 = iVar3 + -1;
              if (iVar3 == 0) goto LAB_004e39ca;
            }
            fwrite(&DAT_00652b6e,5,1,pFVar11);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
LAB_004e39ca:
        fflush(pFVar11);
        uVar18 = binbuf_clear(CONCAT44(extraout_XMM0_Db_17,extraout_XMM0_Da_17),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,*(int **)(param_9 + 0x58));
        pd_tilde_readmessages
                  (uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pFVar12,
                   extraout_RDX_07,pFVar13,pcVar16,param_14);
        *(FILE **)(param_9 + 0x50) = pFVar11;
        *(FILE **)(param_9 + 0x48) = pFVar12;
        return;
      }
      pd_error(CONCAT44(extraout_XMM0_Db_16,extraout_XMM0_Da_16),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,"pd~: can\'t fork",extraout_RDX_06,pFVar13,pcVar16,
               param_14);
      close(local_18a0);
      close(local_189c);
      if (0 < *(__pid_t *)(param_9 + 0x60)) {
        waitpid(*(__pid_t *)(param_9 + 0x60),(int *)0x0,0);
      }
    }
    close(local_1898);
    close(local_1894);
    goto LAB_004e3b08;
  }
  pd_error(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_14),param_2,param_3,param_4,param_5,param_6
           ,param_7,param_8,param_9,"pd~: can\'t create pipe",extraout_RDX_04,pFVar13,pcVar16,
           param_14);
LAB_004e3b08:
  *local_1888 = 0;
  local_1888[1] = 0;
  *(undefined4 *)(param_9 + 0x60) = 0xffffffff;
  post(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"pd~ startup failed");
  return;
code_r0x004e366b:
  pcVar16 = local_808;
  param_13 = (char *)0x0;
  param_9 = local_1880;
LAB_004e367f:
  pd_error(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "pd~: can\'t stat %s",pcVar16,uVar18,param_13,param_14);
  goto LAB_004e3b08;
}


