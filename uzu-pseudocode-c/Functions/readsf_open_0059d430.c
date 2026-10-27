// Function : readsf_open
// Namespace: 
// Entry    : 0059d430
// Prototype: undefined readsf_open(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined * param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0059d430 - 0059d7e7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void readsf_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined *param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
                undefined8 param_14)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined7 extraout_var;
  undefined8 *puVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  char local_420 [8];
  int local_418 [250];
  
  piVar11 = param_12;
  if (((int)param_11 < 1) || (*param_12 != 2)) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    lVar10 = sf_numtypes * 8;
    puVar8 = (undefined8 *)0x0;
    do {
      pcVar2 = (char *)**(undefined8 **)(piVar11 + 2);
      if (*pcVar2 != '-') break;
      lVar12 = 0;
      while( true ) {
        puVar8 = *(undefined8 **)((long)&sf_types + lVar12);
        iVar4 = strcmp(pcVar2 + 1,(char *)*puVar8);
        if (iVar4 == 0) break;
        lVar12 = lVar12 + 8;
        if (lVar10 == lVar12) {
          uVar18 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,(long)param_9,
                            "[readsf~]: usage; open [flags] filename [onset] [headersize]...",
                            extraout_RDX,param_12,param_13,param_14);
          uVar18 = pd_error(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                            "[nchannels] [bytespersample] [endian (b or l)]",extraout_RDX_04,
                            param_12,param_13,param_14);
          post(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"flags: %s");
          return;
        }
      }
      piVar11 = piVar11 + 4;
      if ((int)param_11 < 2) {
        param_11 = 0;
        break;
      }
      param_11 = param_11 - 1;
    } while (*piVar11 == 2);
  }
  puVar5 = (undefined8 *)atom_getsymbolarg(0,param_11,(long)piVar11);
  fVar13 = (float)atom_getfloatarg(1,param_11,(long)piVar11);
  fVar14 = (float)atom_getfloatarg(2,param_11,(long)piVar11);
  fVar15 = (float)atom_getfloatarg(3,param_11,(long)piVar11);
  fVar16 = (float)atom_getfloatarg(4,param_11,(long)piVar11);
  pcVar9 = (code *)(ulong)param_11;
  puVar6 = (undefined8 *)atom_getsymbolarg(5,param_11,(long)piVar11);
  if (*(char *)*puVar5 != '\0') {
    pthread_mutex_lock((pthread_mutex_t *)(param_9 + 0x2e8));
    if (*(long **)(param_9 + 0x378) != (long *)0x0) {
      namelist_free(*(long **)(param_9 + 0x378));
      *(undefined8 *)(param_9 + 0x378) = 0;
    }
    bVar3 = sys_isabsolutepath((char *)*puVar5);
    uVar18 = extraout_RDX_00;
    uVar17 = extraout_XMM0_Qa_00;
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      pcVar9 = readsf_one_iter;
      canvas_path_iterate(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,*(long *)(param_9 + 0x30),readsf_one_iter,param_9,param_12,
                          param_13,param_14);
      uVar18 = extraout_RDX_01;
      uVar17 = extraout_XMM0_Qa_01;
    }
    if (*(int *)PTR_sys_verbose_00715ce0 != 0) {
      puVar7 = (undefined8 *)
               canvas_getdir(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(long *)(param_9 + 0x30),pcVar9,uVar18,param_12,param_13,param_14);
      param_12 = local_418;
      param_13 = local_420;
      param_14 = 1000;
      iVar4 = do_open_via_path(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,(char *)*puVar7,(char *)*puVar5,"",(char *)param_12,
                               (undefined8 *)param_13,1000,1,*(undefined8 **)(param_9 + 0x378),1);
      uVar18 = extraout_RDX_02;
      if (-1 < iVar4) {
        close(iVar4);
        uVar18 = extraout_RDX_03;
      }
    }
    *(undefined8 *)(param_9 + 0x280) = 0;
    *(undefined8 *)(param_9 + 0x288) = 0;
    *(undefined8 *)(param_9 + 0x2a0) = 0;
    *(undefined8 *)(param_9 + 0x2a8) = 0;
    *(undefined8 *)(param_9 + 0x290) = 0;
    *(undefined8 *)(param_9 + 0x298) = 0;
    *(undefined4 *)(param_9 + 0x280) = 0xffffffff;
    *(undefined8 *)(param_9 + 0x2b0) = 0x7fffffffffffffff;
    *(undefined4 *)(param_9 + 0x268) = 1;
    *(undefined8 *)(param_9 + 0x270) = *puVar5;
    *(undefined8 *)(param_9 + 0x2c4) = 0;
    cVar1 = *(char *)*puVar6;
    if ((cVar1 != '\0') && (cVar1 != 'l')) {
      if (cVar1 == 'b') {
        *(undefined4 *)(param_9 + 0x2a8) = 1;
      }
      else {
        pd_error(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                 "[readsf~] open: endianness neither \'b\' nor \'l\'",uVar18,param_12,param_13,
                 param_14);
      }
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    *(long *)(param_9 + 0x2b8) =
         (long)(fVar13 - _DAT_0065daf0) & (long)fVar13 >> 0x3f | (long)fVar13;
    uVar20 = DAT_005d9054 & -(uint)(fVar14 == 0.0);
    uVar19 = ~-(uint)(0.0 < fVar14) & uVar20;
    lVar10 = (long)(float)(-(uint)(0.0 < fVar14) & (uint)fVar14 | uVar19);
    if (fVar15 <= DAT_005d9038) {
      fVar15 = DAT_005d9038;
    }
    *(long *)(param_9 + 0x2a0) = lVar10;
    *(int *)(param_9 + 0x294) = (int)fVar15;
    if (fVar16 <= DAT_005d9078) {
      fVar16 = DAT_005d9078;
    }
    *(int *)(param_9 + 0x298) = (int)fVar16;
    *(int *)(param_9 + 0x2ac) = (int)fVar16 * (int)fVar15;
    if ((puVar8 != (undefined8 *)0x0) && (-1 < lVar10)) {
      puVar8 = (undefined8 *)0x0;
      post((ulong)(uint)fVar16,(ulong)uVar19,(ulong)uVar20,CONCAT44(extraout_XMM0_Db,fVar14),param_5
           ,param_6,param_7,param_8,"\'-%s\' overridden by headersize");
    }
    *(undefined8 **)(param_9 + 0x288) = puVar8;
    *(undefined4 *)(param_9 + 0x2cc) = 0;
    *(undefined4 *)(param_9 + 0x278) = 0;
    *(undefined4 *)(param_9 + 0x260) = 1;
    pthread_cond_signal((pthread_cond_t *)(param_9 + 0x310));
    pthread_mutex_unlock((pthread_mutex_t *)(param_9 + 0x2e8));
  }
  return;
}


