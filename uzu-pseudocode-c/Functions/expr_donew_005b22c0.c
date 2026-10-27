// Function : expr_donew
// Namespace: 
// Entry    : 005b22c0
// Prototype: undefined8 expr_donew(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005b22c0 - 005b26e4


/* WARNING: Type propagation algorithm not settling */

undefined8
expr_donew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          uint param_10,undefined8 *param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  size_t __n;
  long *plVar1;
  long lVar2;
  bool bVar3;
  int *piVar4;
  undefined1 *__dest;
  long *__dest_00;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  size_t __nmemb;
  undefined1 *__ptr;
  size_t sVar9;
  size_t __nmemb_00;
  long lVar10;
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
  undefined4 extraout_XMM0_Da_09;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 uVar13;
  undefined1 uVar14;
  int iVar15;
  int local_44;
  long local_40;
  void *local_38;
  
  memset((void *)(param_9 + 0x698),0,0xc80);
  piVar4 = binbuf_new();
  uVar12 = binbuf_add(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,piVar4,param_10,param_11,param_12,param_13,param_14);
  binbuf_gettext(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,&local_38,
                 &local_44,param_12,param_13,param_14);
  uVar12 = binbuf_free(piVar4);
  local_38 = resizebytes(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_38,
                         (long)local_44,(long)local_44 + 1);
  plVar7 = (long *)(long)local_44;
  *(undefined1 *)((long)local_38 + (long)plVar7) = 0;
  *(void **)(param_9 + 0x40) = local_38;
  *(void **)(param_9 + 0x48) = local_38;
  *(undefined4 *)(param_9 + 0x38) = 0;
  local_40 = param_9;
  do {
    memset(ex_lex_tmpnodes,0,0x3c0);
    __nmemb_00 = 0x1e;
    __nmemb = 0;
    iVar15 = 0;
    uVar12 = extraout_RDX;
    __ptr = ex_lex_tmpnodes;
    __n = 0;
    uVar11 = extraout_XMM0_Da_00;
    uVar13 = extraout_XMM0_Db_00;
    do {
      sVar9 = __n;
      lVar10 = local_40;
      if ((long)__nmemb < (long)__nmemb_00) {
        __dest = __ptr;
      }
      else {
        __nmemb_00 = __nmemb_00 + 0x1e;
        if (iVar15 == 0) {
          __dest = calloc(__nmemb_00,0x20);
          memcpy(__dest,ex_lex_tmpnodes,0x3c0);
          iVar15 = 1;
          uVar12 = extraout_RDX_01;
          uVar11 = extraout_XMM0_Da_02;
          uVar13 = extraout_XMM0_Db_02;
        }
        else {
          printf("realloc called with %zu bytes\n",__nmemb_00 * 0x20);
          uVar14 = (undefined1)iVar15;
          __dest = realloc(__ptr,__nmemb_00 * 0x20);
          if (__dest == (undefined1 *)0x0) {
            free(__ptr);
            uVar12 = extraout_RDX_05;
            uVar11 = extraout_XMM0_Da_08;
            uVar13 = extraout_XMM0_Db_08;
            goto LAB_005b25be;
          }
          iVar15 = 1;
          uVar12 = extraout_RDX_00;
          uVar11 = extraout_XMM0_Da_01;
          uVar13 = extraout_XMM0_Db_01;
        }
      }
      uVar12 = getoken(CONCAT44(uVar13,uVar11),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8,lVar10,(float *)(__dest + sVar9),uVar12,plVar7,param_13,param_14);
      if ((int)uVar12 != 0) {
        bVar3 = true;
        if (iVar15 != 0) {
          free(__dest + sVar9);
        }
        __dest_00 = (long *)0x0;
        iVar15 = *(int *)(lVar10 + 0x38);
        goto joined_r0x005b26cb;
      }
      __nmemb = __nmemb + 1;
      __n = sVar9 + 0x20;
      uVar12 = extraout_RDX_02;
      __ptr = __dest;
      uVar11 = extraout_XMM0_Da_03;
      uVar13 = extraout_XMM0_Db_03;
    } while (*(long *)(__dest + sVar9 + 8) != 0);
    __dest_00 = calloc(__nmemb,0x20);
    if (__dest_00 == (long *)0x0) {
      uVar12 = extraout_RDX_03;
      uVar11 = extraout_XMM0_Da_04;
      uVar13 = extraout_XMM0_Db_04;
      if (iVar15 != 0) {
        free(__dest);
        uVar12 = extraout_RDX_06;
        uVar11 = extraout_XMM0_Da_09;
        uVar13 = extraout_XMM0_Db_09;
      }
      uVar14 = (undefined1)iVar15;
      lVar10 = local_40;
LAB_005b25be:
      __dest_00 = (long *)0x0;
      ex_error(CONCAT44(uVar13,uVar11),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               lVar10,"ex_lex: no memory\n",uVar12,plVar7,param_13,param_14,uVar14);
      bVar3 = true;
LAB_005b25cb:
      iVar15 = *(int *)(lVar10 + 0x38);
      goto joined_r0x005b26cb;
    }
    memcpy(__dest_00,__dest,__n);
    if (iVar15 != 0) {
      free(__dest);
    }
    pvVar5 = malloc(__n);
    lVar10 = local_40;
    iVar15 = *(int *)(local_40 + 0x38);
    *(void **)(local_40 + 0x378 + (long)iVar15 * 8) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      bVar3 = false;
      pd_error(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,local_40,"expr: malloc for expr nodes failed\n",
               extraout_RDX_04,(long)iVar15,param_13,param_14);
      iVar15 = *(int *)(lVar10 + 0x38);
      goto joined_r0x005b26cb;
    }
    *(undefined8 *)((long)pvVar5 + sVar9 + 8) = 0;
    *(int *)(local_40 + 0x38) = iVar15 + 1;
    plVar7 = ex_match(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,__dest_00,0);
    iVar15 = *(int *)(lVar10 + 0x38);
    lVar8 = (long)iVar15;
    if (100 < lVar8) {
      pd_error(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,lVar10,"expr: too many variables (maximum %d allowed)",100,
               lVar8,param_13,param_14);
      iVar15 = *(int *)(lVar10 + 0x38);
joined_r0x005b26cb:
      bVar3 = false;
joined_r0x005b26cb:
      if (0 < iVar15) {
        lVar8 = 0;
        do {
          free(*(void **)(lVar10 + 0x378 + lVar8 * 8));
          *(undefined8 *)(lVar10 + 0x378 + lVar8 * 8) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)(lVar10 + 0x38));
      }
      *(undefined4 *)(lVar10 + 0x38) = 0;
      if (!bVar3) {
        free(__dest_00);
      }
      freebytes(local_38);
      return 1;
    }
    if (plVar7 == (long *)0x0) goto joined_r0x005b26cb;
    bVar3 = false;
    plVar7 = (long *)0x0;
    plVar6 = ex_parse(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,lVar10,__dest_00,
                      *(long **)(lVar10 + 0x370 + lVar8 * 8),0,param_13,param_14);
    if (plVar6 == (long *)0x0) goto LAB_005b25cb;
    plVar1 = *(long **)(lVar10 + 0x370 + (long)*(int *)(lVar10 + 0x38) * 8);
    lVar8 = plVar1[1];
    if (lVar8 != 0) {
      plVar7 = (long *)plVar1[2];
      do {
        if (plVar7 == plVar1) break;
        if (((lVar8 == 3) && (*plVar1 == 0x3001c)) &&
           ((0x15 < (ulong)plVar1[5] || ((0x202020UL >> (plVar1[5] & 0x3fU) & 1) == 0)))) {
          bVar3 = false;
          post(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,"expr: \'%s\' - Bad left value: ");
          iVar15 = *(int *)(lVar10 + 0x38);
          goto joined_r0x005b26cb;
        }
        lVar8 = plVar1[5];
        plVar1 = plVar1 + 4;
      } while (lVar8 != 0);
    }
    free(__dest_00);
    if (**(char **)(lVar10 + 0x48) == '\0') {
      lVar10 = *(long *)PTR_nullex_007159d0;
      lVar8 = *(long *)(PTR_nullex_007159d0 + 8);
      lVar2 = *(long *)(PTR_nullex_007159d0 + 0x18);
      plVar6[2] = *(long *)(PTR_nullex_007159d0 + 0x10);
      plVar6[3] = lVar2;
      *plVar6 = lVar10;
      plVar6[1] = lVar8;
      return 0;
    }
  } while( true );
}


