// Function : hb_font_create
// Namespace: 
// Entry    : 0043f820
// Prototype: hb_font_t * hb_font_create(int * param_1)
// Body     : 0043f820 - 00440c17


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

hb_font_t * hb_font_create(int *param_1)

{
  float *pfVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [11];
  undefined8 uVar36;
  ushort uVar37;
  ushort uVar38;
  int iVar39;
  hb_font_t *this;
  long *__ptr;
  undefined4 *puVar40;
  pthread_mutex_t *ppVar41;
  void *pvVar42;
  ulong uVar43;
  avar *this_00;
  int *piVar44;
  ushort uVar45;
  ushort uVar46;
  int iVar47;
  long lVar48;
  ulong uVar49;
  ulong uVar50;
  uint uVar51;
  undefined1 (*pauVar52) [16];
  uint *puVar53;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  uint uVar54;
  int *piVar55;
  undefined4 *puVar56;
  undefined8 *puVar57;
  uint uVar58;
  pthread_mutex_t *__size;
  undefined4 *in_R8;
  undefined4 *puVar59;
  undefined4 *puVar60;
  bool bVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar72;
  undefined1 auVar73 [12];
  undefined4 uVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint local_54;
  pthread_mutex_t *local_50;
  long local_48;
  
  piVar44 = param_1;
  if (param_1 == (int *)0x0) {
    piVar44 = (int *)_hb_Null_hb_face_t;
  }
  this = calloc(1,0xc0);
  if (this == (hb_font_t *)0x0) {
    this = (hb_font_t *)&_hb_Null_hb_font_t;
  }
  else {
    *(undefined4 *)this = 1;
    *(undefined4 *)(this + 4) = 1;
    *(undefined8 *)(this + 8) = 0;
    if (piVar44[1] != 0) {
      piVar44[1] = 0;
    }
    *(undefined **)(this + 0x18) = &_hb_Null_hb_font_t;
    if (*piVar44 != 0) {
      LOCK();
      *piVar44 = *piVar44 + 1;
      UNLOCK();
    }
    *(int **)(this + 0x20) = piVar44;
    *(undefined4 **)(this + 0x90) = &_hb_font_funcs_default;
    *(hb_font_t **)(this + 0xa8) = this;
    uVar58 = piVar44[5];
    if (uVar58 == 0) {
      puVar40 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                       *)(piVar44 + 0x1c));
      uVar38 = *(ushort *)((long)puVar40 + 0x12) << 8 | *(ushort *)((long)puVar40 + 0x12) >> 8;
      uVar58 = 1000;
      if (uVar38 - 0x10 < 0x3ff1) {
        uVar58 = (uint)uVar38;
      }
      piVar44[5] = uVar58;
    }
    *(uint *)(this + 0x2c) = uVar58;
    *(uint *)(this + 0x28) = uVar58;
    this[0x38] = (hb_font_t)0x1;
    *(undefined8 *)(this + 0x4c) = 0x3f8000003f800000;
    uVar36 = _UNK_005dd378;
    *(undefined8 *)(this + 0x58) = _DAT_005dd370;
    *(undefined8 *)(this + 0x60) = uVar36;
    *(undefined4 *)(this + 0x74) = 0xffffffff;
  }
  __size = (pthread_mutex_t *)0x20;
  __ptr = calloc(1,0x20);
  if (__ptr != (long *)0x0) {
    piVar44 = *(int **)(this + 0x20);
    *__ptr = (long)(piVar44 + 0x1a);
    if (((piVar44 != (int *)0x0) && (*piVar44 != 0)) &&
       (ppVar41 = *(pthread_mutex_t **)(piVar44 + 2), ppVar41 != (pthread_mutex_t *)0x0)) {
      iVar39 = pthread_mutex_lock(ppVar41);
      if (iVar39 != 0) goto LAB_00440c08;
      if ((ulong)*(uint *)((long)ppVar41 + 0x2c) != 0) {
        lVar48 = 0;
        __size = (pthread_mutex_t *)&hb_ot_font_cmap_cache_user_data_key;
        do {
          if (*(undefined1 **)(*(long *)((long)ppVar41 + 0x30) + lVar48) ==
              &hb_ot_font_cmap_cache_user_data_key) {
            puVar40 = *(undefined4 **)(*(long *)((long)ppVar41 + 0x30) + 8 + lVar48);
            pthread_mutex_unlock(ppVar41);
            if (puVar40 == (undefined4 *)0x0) goto LAB_0043f97b;
            goto LAB_00440489;
          }
          lVar48 = lVar48 + 0x18;
        } while ((ulong)*(uint *)((long)ppVar41 + 0x2c) * 0x18 != lVar48);
      }
      pthread_mutex_unlock(ppVar41);
    }
LAB_0043f97b:
    __size = (pthread_mutex_t *)0x400;
    puVar40 = calloc(1,0x400);
    if (puVar40 != (undefined4 *)0x0) {
      *puVar40 = 0xffffffff;
      puVar40[1] = 0xffffffff;
      puVar40[2] = 0xffffffff;
      puVar40[3] = 0xffffffff;
      puVar40[4] = 0xffffffff;
      puVar40[5] = 0xffffffff;
      puVar40[6] = 0xffffffff;
      puVar40[7] = 0xffffffff;
      puVar40[8] = 0xffffffff;
      puVar40[9] = 0xffffffff;
      puVar40[10] = 0xffffffff;
      puVar40[0xb] = 0xffffffff;
      puVar40[0xc] = 0xffffffff;
      puVar40[0xd] = 0xffffffff;
      puVar40[0xe] = 0xffffffff;
      puVar40[0xf] = 0xffffffff;
      puVar40[0x10] = 0xffffffff;
      puVar40[0x11] = 0xffffffff;
      puVar40[0x12] = 0xffffffff;
      puVar40[0x13] = 0xffffffff;
      puVar40[0x14] = 0xffffffff;
      puVar40[0x15] = 0xffffffff;
      puVar40[0x16] = 0xffffffff;
      puVar40[0x17] = 0xffffffff;
      puVar40[0x18] = 0xffffffff;
      puVar40[0x19] = 0xffffffff;
      puVar40[0x1a] = 0xffffffff;
      puVar40[0x1b] = 0xffffffff;
      puVar40[0x1c] = 0xffffffff;
      puVar40[0x1d] = 0xffffffff;
      puVar40[0x1e] = 0xffffffff;
      puVar40[0x1f] = 0xffffffff;
      puVar40[0x20] = 0xffffffff;
      puVar40[0x21] = 0xffffffff;
      puVar40[0x22] = 0xffffffff;
      puVar40[0x23] = 0xffffffff;
      puVar40[0x24] = 0xffffffff;
      puVar40[0x25] = 0xffffffff;
      puVar40[0x26] = 0xffffffff;
      puVar40[0x27] = 0xffffffff;
      puVar40[0x28] = 0xffffffff;
      puVar40[0x29] = 0xffffffff;
      puVar40[0x2a] = 0xffffffff;
      puVar40[0x2b] = 0xffffffff;
      puVar40[0x2c] = 0xffffffff;
      puVar40[0x2d] = 0xffffffff;
      puVar40[0x2e] = 0xffffffff;
      puVar40[0x2f] = 0xffffffff;
      puVar40[0x30] = 0xffffffff;
      puVar40[0x31] = 0xffffffff;
      puVar40[0x32] = 0xffffffff;
      puVar40[0x33] = 0xffffffff;
      puVar40[0x34] = 0xffffffff;
      puVar40[0x35] = 0xffffffff;
      puVar40[0x36] = 0xffffffff;
      puVar40[0x37] = 0xffffffff;
      puVar40[0x38] = 0xffffffff;
      puVar40[0x39] = 0xffffffff;
      puVar40[0x3a] = 0xffffffff;
      puVar40[0x3b] = 0xffffffff;
      puVar40[0x3c] = 0xffffffff;
      puVar40[0x3d] = 0xffffffff;
      puVar40[0x3e] = 0xffffffff;
      puVar40[0x3f] = 0xffffffff;
      puVar40[0x40] = 0xffffffff;
      puVar40[0x41] = 0xffffffff;
      puVar40[0x42] = 0xffffffff;
      puVar40[0x43] = 0xffffffff;
      puVar40[0x44] = 0xffffffff;
      puVar40[0x45] = 0xffffffff;
      puVar40[0x46] = 0xffffffff;
      puVar40[0x47] = 0xffffffff;
      puVar40[0x48] = 0xffffffff;
      puVar40[0x49] = 0xffffffff;
      puVar40[0x4a] = 0xffffffff;
      puVar40[0x4b] = 0xffffffff;
      puVar40[0x4c] = 0xffffffff;
      puVar40[0x4d] = 0xffffffff;
      puVar40[0x4e] = 0xffffffff;
      puVar40[0x4f] = 0xffffffff;
      puVar40[0x50] = 0xffffffff;
      puVar40[0x51] = 0xffffffff;
      puVar40[0x52] = 0xffffffff;
      puVar40[0x53] = 0xffffffff;
      puVar40[0x54] = 0xffffffff;
      puVar40[0x55] = 0xffffffff;
      puVar40[0x56] = 0xffffffff;
      puVar40[0x57] = 0xffffffff;
      puVar40[0x58] = 0xffffffff;
      puVar40[0x59] = 0xffffffff;
      puVar40[0x5a] = 0xffffffff;
      puVar40[0x5b] = 0xffffffff;
      puVar40[0x5c] = 0xffffffff;
      puVar40[0x5d] = 0xffffffff;
      puVar40[0x5e] = 0xffffffff;
      puVar40[0x5f] = 0xffffffff;
      puVar40[0x60] = 0xffffffff;
      puVar40[0x61] = 0xffffffff;
      puVar40[0x62] = 0xffffffff;
      puVar40[99] = 0xffffffff;
      puVar40[100] = 0xffffffff;
      puVar40[0x65] = 0xffffffff;
      puVar40[0x66] = 0xffffffff;
      puVar40[0x67] = 0xffffffff;
      puVar40[0x68] = 0xffffffff;
      puVar40[0x69] = 0xffffffff;
      puVar40[0x6a] = 0xffffffff;
      puVar40[0x6b] = 0xffffffff;
      puVar40[0x6c] = 0xffffffff;
      puVar40[0x6d] = 0xffffffff;
      puVar40[0x6e] = 0xffffffff;
      puVar40[0x6f] = 0xffffffff;
      puVar40[0x70] = 0xffffffff;
      puVar40[0x71] = 0xffffffff;
      puVar40[0x72] = 0xffffffff;
      puVar40[0x73] = 0xffffffff;
      puVar40[0x74] = 0xffffffff;
      puVar40[0x75] = 0xffffffff;
      puVar40[0x76] = 0xffffffff;
      puVar40[0x77] = 0xffffffff;
      puVar40[0x78] = 0xffffffff;
      puVar40[0x79] = 0xffffffff;
      puVar40[0x7a] = 0xffffffff;
      puVar40[0x7b] = 0xffffffff;
      puVar40[0x7c] = 0xffffffff;
      puVar40[0x7d] = 0xffffffff;
      puVar40[0x7e] = 0xffffffff;
      puVar40[0x7f] = 0xffffffff;
      puVar40[0x80] = 0xffffffff;
      puVar40[0x81] = 0xffffffff;
      puVar40[0x82] = 0xffffffff;
      puVar40[0x83] = 0xffffffff;
      puVar40[0x84] = 0xffffffff;
      puVar40[0x85] = 0xffffffff;
      puVar40[0x86] = 0xffffffff;
      puVar40[0x87] = 0xffffffff;
      puVar40[0x88] = 0xffffffff;
      puVar40[0x89] = 0xffffffff;
      puVar40[0x8a] = 0xffffffff;
      puVar40[0x8b] = 0xffffffff;
      puVar40[0x8c] = 0xffffffff;
      puVar40[0x8d] = 0xffffffff;
      puVar40[0x8e] = 0xffffffff;
      puVar40[0x8f] = 0xffffffff;
      puVar40[0x90] = 0xffffffff;
      puVar40[0x91] = 0xffffffff;
      puVar40[0x92] = 0xffffffff;
      puVar40[0x93] = 0xffffffff;
      puVar40[0x94] = 0xffffffff;
      puVar40[0x95] = 0xffffffff;
      puVar40[0x96] = 0xffffffff;
      puVar40[0x97] = 0xffffffff;
      puVar40[0x98] = 0xffffffff;
      puVar40[0x99] = 0xffffffff;
      puVar40[0x9a] = 0xffffffff;
      puVar40[0x9b] = 0xffffffff;
      puVar40[0x9c] = 0xffffffff;
      puVar40[0x9d] = 0xffffffff;
      puVar40[0x9e] = 0xffffffff;
      puVar40[0x9f] = 0xffffffff;
      puVar40[0xa0] = 0xffffffff;
      puVar40[0xa1] = 0xffffffff;
      puVar40[0xa2] = 0xffffffff;
      puVar40[0xa3] = 0xffffffff;
      puVar40[0xa4] = 0xffffffff;
      puVar40[0xa5] = 0xffffffff;
      puVar40[0xa6] = 0xffffffff;
      puVar40[0xa7] = 0xffffffff;
      puVar40[0xa8] = 0xffffffff;
      puVar40[0xa9] = 0xffffffff;
      puVar40[0xaa] = 0xffffffff;
      puVar40[0xab] = 0xffffffff;
      puVar40[0xac] = 0xffffffff;
      puVar40[0xad] = 0xffffffff;
      puVar40[0xae] = 0xffffffff;
      puVar40[0xaf] = 0xffffffff;
      puVar40[0xb0] = 0xffffffff;
      puVar40[0xb1] = 0xffffffff;
      puVar40[0xb2] = 0xffffffff;
      puVar40[0xb3] = 0xffffffff;
      puVar40[0xb4] = 0xffffffff;
      puVar40[0xb5] = 0xffffffff;
      puVar40[0xb6] = 0xffffffff;
      puVar40[0xb7] = 0xffffffff;
      puVar40[0xb8] = 0xffffffff;
      puVar40[0xb9] = 0xffffffff;
      puVar40[0xba] = 0xffffffff;
      puVar40[0xbb] = 0xffffffff;
      puVar40[0xbc] = 0xffffffff;
      puVar40[0xbd] = 0xffffffff;
      puVar40[0xbe] = 0xffffffff;
      puVar40[0xbf] = 0xffffffff;
      puVar40[0xc0] = 0xffffffff;
      puVar40[0xc1] = 0xffffffff;
      puVar40[0xc2] = 0xffffffff;
      puVar40[0xc3] = 0xffffffff;
      puVar40[0xc4] = 0xffffffff;
      puVar40[0xc5] = 0xffffffff;
      puVar40[0xc6] = 0xffffffff;
      puVar40[199] = 0xffffffff;
      puVar40[200] = 0xffffffff;
      puVar40[0xc9] = 0xffffffff;
      puVar40[0xca] = 0xffffffff;
      puVar40[0xcb] = 0xffffffff;
      puVar40[0xcc] = 0xffffffff;
      puVar40[0xcd] = 0xffffffff;
      puVar40[0xce] = 0xffffffff;
      puVar40[0xcf] = 0xffffffff;
      puVar40[0xd0] = 0xffffffff;
      puVar40[0xd1] = 0xffffffff;
      puVar40[0xd2] = 0xffffffff;
      puVar40[0xd3] = 0xffffffff;
      puVar40[0xd4] = 0xffffffff;
      puVar40[0xd5] = 0xffffffff;
      puVar40[0xd6] = 0xffffffff;
      puVar40[0xd7] = 0xffffffff;
      puVar40[0xd8] = 0xffffffff;
      puVar40[0xd9] = 0xffffffff;
      puVar40[0xda] = 0xffffffff;
      puVar40[0xdb] = 0xffffffff;
      puVar40[0xdc] = 0xffffffff;
      puVar40[0xdd] = 0xffffffff;
      puVar40[0xde] = 0xffffffff;
      puVar40[0xdf] = 0xffffffff;
      puVar40[0xe0] = 0xffffffff;
      puVar40[0xe1] = 0xffffffff;
      puVar40[0xe2] = 0xffffffff;
      puVar40[0xe3] = 0xffffffff;
      puVar40[0xe4] = 0xffffffff;
      puVar40[0xe5] = 0xffffffff;
      puVar40[0xe6] = 0xffffffff;
      puVar40[0xe7] = 0xffffffff;
      puVar40[0xe8] = 0xffffffff;
      puVar40[0xe9] = 0xffffffff;
      puVar40[0xea] = 0xffffffff;
      puVar40[0xeb] = 0xffffffff;
      puVar40[0xec] = 0xffffffff;
      puVar40[0xed] = 0xffffffff;
      puVar40[0xee] = 0xffffffff;
      puVar40[0xef] = 0xffffffff;
      puVar40[0xf0] = 0xffffffff;
      puVar40[0xf1] = 0xffffffff;
      puVar40[0xf2] = 0xffffffff;
      puVar40[0xf3] = 0xffffffff;
      puVar40[0xf4] = 0xffffffff;
      puVar40[0xf5] = 0xffffffff;
      puVar40[0xf6] = 0xffffffff;
      puVar40[0xf7] = 0xffffffff;
      puVar40[0xf8] = 0xffffffff;
      puVar40[0xf9] = 0xffffffff;
      puVar40[0xfa] = 0xffffffff;
      puVar40[0xfb] = 0xffffffff;
      puVar40[0xfc] = 0xffffffff;
      puVar40[0xfd] = 0xffffffff;
      puVar40[0xfe] = 0xffffffff;
      puVar40[0xff] = 0xffffffff;
      piVar44 = *(int **)(this + 0x20);
      if ((piVar44 != (int *)0x0) && (*piVar44 != 0)) {
        ppVar41 = *(pthread_mutex_t **)(piVar44 + 2);
        while (ppVar41 == (pthread_mutex_t *)0x0) {
          __size = (pthread_mutex_t *)0x38;
          ppVar41 = calloc(1,0x38);
          if (ppVar41 == (pthread_mutex_t *)0x0) goto LAB_00440467;
          *(undefined1 (*) [16])&(ppVar41->__data).__list.__next = (undefined1  [16])0x0;
          *(int *)((long)&ppVar41->__data + 0x10) = 0;
          *(int *)((long)&ppVar41->__data + 0x14) = 0;
          ((__pthread_list_t *)((long)&ppVar41->__data + 0x18))->__prev =
               (__pthread_internal_list *)0x0;
          ppVar41->__size[0] = '\0';
          ppVar41->__size[1] = '\0';
          ppVar41->__size[2] = '\0';
          ppVar41->__size[3] = '\0';
          ppVar41->__size[4] = '\0';
          ppVar41->__size[5] = '\0';
          ppVar41->__size[6] = '\0';
          ppVar41->__size[7] = '\0';
          ppVar41->__size[8] = '\0';
          ppVar41->__size[9] = '\0';
          ppVar41->__size[10] = '\0';
          ppVar41->__size[0xb] = '\0';
          ppVar41->__size[0xc] = '\0';
          ppVar41->__size[0xd] = '\0';
          ppVar41->__size[0xe] = '\0';
          ppVar41->__size[0xf] = '\0';
          *(undefined8 *)((long)ppVar41 + 0x30) = 0;
          LOCK();
          bVar61 = *(long *)(piVar44 + 2) == 0;
          if (bVar61) {
            *(__pthread_mutex_s **)(piVar44 + 2) = &ppVar41->__data;
          }
          UNLOCK();
          if (bVar61) break;
          __size = ppVar41;
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar41[1].__data,ppVar41);
          free(ppVar41);
          ppVar41 = *(pthread_mutex_t **)(piVar44 + 2);
        }
        iVar39 = pthread_mutex_lock(ppVar41);
        if (iVar39 != 0) {
LAB_00440c08:
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar39);
        }
        pvVar42 = *(void **)((long)ppVar41 + 0x30);
        uVar58 = *(uint *)((long)ppVar41 + 0x2c);
        if ((ulong)uVar58 != 0) {
          lVar48 = 0;
          __size = (pthread_mutex_t *)&hb_ot_font_cmap_cache_user_data_key;
          do {
            if (*(undefined1 **)((long)pvVar42 + lVar48) == &hb_ot_font_cmap_cache_user_data_key) {
              pthread_mutex_unlock(ppVar41);
              goto LAB_00440467;
            }
            lVar48 = lVar48 + 0x18;
          } while ((ulong)uVar58 * 0x18 != lVar48);
        }
        uVar51 = ppVar41[1].__data.__lock;
        if ((int)uVar58 < (int)uVar51) {
LAB_0044041a:
          uVar50 = (ulong)*(uint *)((long)ppVar41 + 0x2c);
          *(uint *)((long)ppVar41 + 0x2c) = *(uint *)((long)ppVar41 + 0x2c) + 1;
          puVar57 = (undefined8 *)((long)pvVar42 + uVar50 * 0x18);
          *(undefined1 **)((long)pvVar42 + uVar50 * 0x18) = &hb_ot_font_cmap_cache_user_data_key;
          *(undefined4 **)((long)pvVar42 + uVar50 * 0x18 + 8) = puVar40;
          *(undefined **)((long)pvVar42 + uVar50 * 0x18 + 0x10) = PTR_free_00715540;
          pthread_mutex_unlock(ppVar41);
          iVar39 = ppVar41[1].__data.__lock;
        }
        else {
          if (-1 < (int)uVar51) {
            if (uVar51 < uVar58 + 1) {
              uVar54 = uVar51;
              do {
                uVar54 = uVar54 + (uVar54 >> 1) + 8;
              } while (uVar54 < uVar58 + 1);
              if (0xaaaaaaa < uVar54) {
LAB_00440b8b:
                ppVar41[1].__data.__lock = ~uVar51;
                goto LAB_00440b91;
              }
              if (uVar54 == 0) {
                free(pvVar42);
                pvVar42 = (void *)0x0;
              }
              else {
                __size = (pthread_mutex_t *)((ulong)uVar54 * 0x18);
                pvVar42 = realloc(pvVar42,(size_t)__size);
                if (pvVar42 == (void *)0x0) {
                  uVar51 = ppVar41[1].__data.__lock;
                  if (uVar54 <= uVar51) {
                    pvVar42 = *(void **)((long)ppVar41 + 0x30);
                    goto LAB_0044041a;
                  }
                  goto LAB_00440b8b;
                }
              }
              *(void **)((long)ppVar41 + 0x30) = pvVar42;
              ppVar41[1].__data.__lock = uVar54;
            }
            goto LAB_0044041a;
          }
LAB_00440b91:
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90 = 0;
          puVar57 = &_hb_CrapPool;
          pthread_mutex_unlock(ppVar41);
          iVar39 = ppVar41[1].__data.__lock;
        }
        if ((-1 < iVar39) && (puVar57 != (undefined8 *)0x0)) goto LAB_00440489;
      }
LAB_00440467:
      free(puVar40);
      puVar40 = (undefined4 *)0x0;
    }
LAB_00440489:
    __ptr[1] = (long)puVar40;
    while( true ) {
      piVar44 = static_ot_funcs;
      static_ot_funcs = piVar44;
      if (piVar44 != (int *)0x0) break;
      piVar44 = hb_ot_font_funcs_lazy_loader_t::create();
      piVar55 = static_ot_funcs;
      if (piVar44 == (int *)0x0) {
        piVar44 = &_hb_font_funcs_default;
        LOCK();
        if (static_ot_funcs == (int *)0x0) {
          static_ot_funcs = &_hb_font_funcs_default;
        }
        UNLOCK();
      }
      else {
        LOCK();
        if (static_ot_funcs == (int *)0x0) {
          static_ot_funcs = piVar44;
        }
        UNLOCK();
      }
      if (piVar55 == (int *)0x0) break;
      if ((piVar44 != (int *)0x0) && (piVar44 != &_hb_font_funcs_default)) {
        hb_font_funcs_destroy(piVar44);
      }
    }
    if (*(int *)(this + 4) == 0) {
      free((void *)__ptr[3]);
      free(__ptr);
    }
    else {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      if (*(code **)(this + 0xa0) != (code *)0x0) {
        (**(code **)(this + 0xa0))(*(undefined8 *)(this + 0x98));
      }
      piVar55 = &_hb_font_funcs_default;
      if (piVar44 != (int *)0x0) {
        piVar55 = piVar44;
      }
      if (*piVar55 != 0) {
        LOCK();
        *piVar55 = *piVar55 + 1;
        UNLOCK();
      }
      hb_font_funcs_destroy(*(int **)(this + 0x90));
      *(int **)(this + 0x90) = piVar55;
      *(long **)(this + 0x98) = __ptr;
      *(code **)(this + 0xa0) = _hb_ot_font_destroy;
    }
  }
  if (param_1 == (int *)0x0) {
    return this;
  }
  if ((uint)param_1[4] < 0x10000) {
    return this;
  }
  if (*(int *)(this + 4) == 0) {
    return this;
  }
  iVar39 = ((uint)param_1[4] >> 0x10) - 1;
  if (*(int *)(this + 0x74) == iVar39) {
    return this;
  }
  iVar47 = *(int *)(this + 0x10);
  iVar72 = iVar47 + 1;
  *(int *)(this + 0x10) = iVar72;
  *(int *)(this + 0x14) = iVar72;
  *(int *)(this + 0x74) = iVar39;
  if (*(int *)(this + 4) == 0) {
    return this;
  }
  iVar47 = iVar47 + 2;
  *(int *)(this + 0x10) = iVar47;
  *(int *)(this + 0x14) = iVar47;
  puVar40 = hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
            ::get((hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
                   *)(*(long *)(this + 0x20) + 0xf8));
  uVar38 = *(ushort *)(puVar40 + 1);
  if (uVar38 == 0) {
    puVar59 = &_hb_NullPool;
    uVar50 = 0;
  }
  else {
    uVar50 = (ulong)(ushort)(uVar38 << 8 | uVar38 >> 8);
    puVar59 = (undefined4 *)((long)puVar40 + uVar50);
  }
  uVar38 = *(ushort *)(puVar40 + 2);
  uVar37 = uVar38 << 8 | uVar38 >> 8;
  uVar58 = (uint)uVar37;
  puVar40 = (undefined4 *)(ulong)uVar58;
  if (uVar38 == 0) {
    local_50 = (pthread_mutex_t *)0x0;
    pvVar42 = (void *)0x0;
  }
  else {
    local_50 = calloc((size_t)puVar40,4);
    pvVar42 = calloc((size_t)puVar40,4);
    fVar64 = _UNK_005de0dc;
    fVar62 = _UNK_005de0d8;
    fVar79 = _UNK_005de0d4;
    fVar63 = _DAT_005de0d0;
    if ((local_50 == (pthread_mutex_t *)0x0) || (pvVar42 == (void *)0x0)) {
      free(local_50);
      free(pvVar42);
      return this;
    }
    uVar43 = 1;
    if (1 < uVar58) {
      uVar43 = (ulong)uVar58;
    }
    if ((uint)uVar43 < 5) {
      uVar50 = 0;
    }
    else {
      uVar49 = (ulong)((uint)uVar43 & 3);
      uVar50 = 4;
      if (uVar49 != 0) {
        uVar50 = uVar49;
      }
      uVar50 = uVar43 - uVar50;
      pauVar52 = (undefined1 (*) [16])(puVar59 + 2);
      lVar48 = 0;
      do {
        auVar70 = *pauVar52;
        auVar69 = pauVar52[1];
        auVar81 = pauVar52[2];
        uVar78 = auVar69._4_4_;
        auVar68._0_8_ = auVar70._0_8_;
        auVar68._8_4_ = auVar70._4_4_;
        auVar68._12_4_ = uVar78;
        auVar82._4_8_ = auVar68._8_8_;
        auVar82._0_4_ = uVar78;
        auVar82._12_4_ = 0;
        auVar82 = auVar82 << 0x20;
        auVar74[1] = 0;
        auVar74[0] = auVar81[8];
        auVar74[2] = auVar81[9];
        auVar74[3] = 0;
        auVar74[4] = auVar81[10];
        auVar74[5] = 0;
        auVar74[6] = auVar81[0xb];
        auVar74[7] = 0;
        auVar74[8] = *(undefined1 *)((long)pauVar52[3] + 0xc);
        auVar74[9] = 0;
        auVar74[10] = *(undefined1 *)((long)pauVar52[3] + 0xd);
        auVar74[0xb] = 0;
        auVar74[0xc] = *(undefined1 *)((long)pauVar52[3] + 0xe);
        auVar74[0xd] = 0;
        auVar74[0xe] = *(undefined1 *)((long)pauVar52[3] + 0xf);
        auVar74[0xf] = 0;
        auVar81 = pshuflw(auVar74,auVar74,0x1b);
        auVar81 = pshufhw(auVar81,auVar81,0x1b);
        auVar6[0xd] = 0;
        auVar6._0_13_ = auVar82._0_13_;
        auVar6[0xe] = auVar69[7];
        auVar9[0xc] = auVar69[6];
        auVar9._0_12_ = auVar82._0_12_;
        auVar9._13_2_ = auVar6._13_2_;
        auVar12[0xb] = 0;
        auVar12._0_11_ = auVar82._0_11_;
        auVar12._12_3_ = auVar9._12_3_;
        auVar15[10] = auVar69[5];
        auVar15._0_10_ = auVar82._0_10_;
        auVar15._11_4_ = auVar12._11_4_;
        auVar18[9] = 0;
        auVar18._0_9_ = auVar82._0_9_;
        auVar18._10_5_ = auVar15._10_5_;
        auVar35[4] = auVar69[4];
        auVar35._0_4_ = uVar78;
        auVar35._5_6_ = auVar18._9_6_;
        auVar26._7_8_ = 0;
        auVar26._0_7_ = auVar35._4_7_;
        auVar27._1_8_ = SUB158(auVar26 << 0x40,7);
        auVar27[0] = auVar70[3];
        auVar27._9_6_ = 0;
        auVar28._1_10_ = SUB1510(auVar27 << 0x30,5);
        auVar28[0] = auVar70[2];
        auVar28._11_4_ = 0;
        auVar23[2] = auVar70[1];
        auVar23._0_2_ = auVar70._0_2_;
        auVar23._3_12_ = SUB1512(auVar28 << 0x20,3);
        auVar70._0_2_ = auVar70._0_2_ & 0xff;
        auVar70._2_13_ = auVar23._2_13_;
        auVar70[0xf] = 0;
        auVar70 = pshuflw(auVar70,auVar70,0x1b);
        auVar70 = pshufhw(auVar70,auVar70,0x1b);
        sVar2 = auVar70._0_2_;
        sVar3 = auVar70._2_2_;
        sVar4 = auVar70._4_2_;
        sVar5 = auVar70._6_2_;
        iVar39 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar70[6] - (0xff < sVar5),
                          CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar70[4] - (0xff < sVar4),
                                   CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar70[2] -
                                            (0xff < sVar3),
                                            (0 < sVar2) * (sVar2 < 0x100) * auVar70[0] -
                                            (0xff < sVar2))));
        sVar2 = auVar70._8_2_;
        sVar3 = auVar70._10_2_;
        sVar4 = auVar70._12_2_;
        sVar5 = auVar70._14_2_;
        auVar66._0_8_ =
             CONCAT17((0 < sVar5) * (sVar5 < 0x100) * auVar70[0xe] - (0xff < sVar5),
                      CONCAT16((0 < sVar4) * (sVar4 < 0x100) * auVar70[0xc] - (0xff < sVar4),
                               CONCAT15((0 < sVar3) * (sVar3 < 0x100) * auVar70[10] - (0xff < sVar3)
                                        ,CONCAT14((0 < sVar2) * (sVar2 < 0x100) * auVar70[8] -
                                                  (0xff < sVar2),iVar39))));
        sVar2 = auVar81._0_2_;
        auVar66[8] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[0] - (0xff < sVar2);
        sVar2 = auVar81._2_2_;
        auVar66[9] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[2] - (0xff < sVar2);
        sVar2 = auVar81._4_2_;
        auVar66[10] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[4] - (0xff < sVar2);
        sVar2 = auVar81._6_2_;
        auVar66[0xb] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[6] - (0xff < sVar2);
        sVar2 = auVar81._8_2_;
        auVar69[0xc] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[8] - (0xff < sVar2);
        auVar69._0_12_ = auVar66;
        sVar2 = auVar81._10_2_;
        auVar69[0xd] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[10] - (0xff < sVar2);
        sVar2 = auVar81._12_2_;
        auVar69[0xe] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[0xc] - (0xff < sVar2);
        sVar2 = auVar81._14_2_;
        auVar69[0xf] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[0xe] - (0xff < sVar2);
        pfVar1 = (float *)((long)pvVar42 + lVar48 * 4);
        *pfVar1 = (float)iVar39 * fVar63;
        pfVar1[1] = (float)(int)((ulong)auVar66._0_8_ >> 0x20) * fVar79;
        pfVar1[2] = (float)auVar66._8_4_ * fVar62;
        pfVar1[3] = (float)auVar69._12_4_ * fVar64;
        lVar48 = lVar48 + 4;
        pauVar52 = pauVar52 + 5;
      } while (uVar50 != lVar48);
    }
    fVar63 = DAT_005de560;
    puVar53 = puVar59 + uVar50 * 5 + 2;
    do {
      uVar58 = *puVar53;
      uVar58 = uVar58 >> 0x18 | (uVar58 & 0xff0000) >> 8 | (uVar58 & 0xff00) << 8 | uVar58 << 0x18;
      __size = (pthread_mutex_t *)(ulong)uVar58;
      *(float *)((long)pvVar42 + uVar50 * 4) = (float)(int)uVar58 * fVar63;
      uVar50 = uVar50 + 1;
      puVar53 = puVar53 + 5;
    } while (uVar43 != uVar50);
  }
  uVar58 = *(uint *)(this + 0x74);
  if (uVar58 == 0xffffffff) {
LAB_00440890:
    local_48 = *(long *)(this + 0x20);
    puVar59 = hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
              ::get((hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
                     *)(local_48 + 0xf8));
    if (uVar38 == 0) {
      local_54 = 0;
      uVar43 = extraout_RDX_00;
      goto LAB_00440a3f;
    }
  }
  else {
    puVar59 = hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
              ::get((hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
                     *)(*(long *)(this + 0x20) + 0xf8));
    fVar64 = _UNK_005de0dc;
    fVar62 = _UNK_005de0d8;
    fVar79 = _UNK_005de0d4;
    fVar63 = _DAT_005de0d0;
    uVar45 = *(ushort *)(puVar59 + 3) << 8 | *(ushort *)(puVar59 + 3) >> 8;
    uVar50 = (ulong)uVar45;
    if (uVar45 <= uVar58) goto LAB_00440890;
    if (uVar38 == 0) {
      local_48 = *(long *)(this + 0x20);
      hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>::
      get((hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
           *)(local_48 + 0xf8));
      local_54 = 0;
      uVar43 = extraout_RDX;
      goto LAB_00440a3f;
    }
    uVar45 = *(ushort *)(puVar59 + 1);
    uVar46 = *(ushort *)(puVar59 + 2) << 8 | *(ushort *)(puVar59 + 2) >> 8;
    if (uVar45 == 0) {
      in_R8 = &_hb_NullPool;
    }
    else {
      in_R8 = (undefined4 *)((long)puVar59 + (ulong)(ushort)(uVar45 << 8 | uVar45 >> 8));
    }
    uVar51 = (uint)uVar46;
    if ((uint)uVar37 < (uint)uVar46) {
      uVar51 = (uint)uVar37;
    }
    if (uVar51 != 0) {
      uVar43 = (ulong)(uVar58 * (ushort)(*(ushort *)((long)puVar59 + 0xe) << 8 |
                                        *(ushort *)((long)puVar59 + 0xe) >> 8));
      if (uVar51 < 8) {
        __size = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
      }
      else {
        __size = (pthread_mutex_t *)(ulong)(uVar51 & 0xfffffff8);
        lVar48 = uVar43 + (ulong)uVar46 * 0x14;
        uVar50 = 0;
        do {
          auVar70 = *(undefined1 (*) [16])((long)in_R8 + uVar50 * 4 + lVar48 + 4);
          auVar69 = *(undefined1 (*) [16])((long)in_R8 + uVar50 * 4 + lVar48 + 0x14);
          auVar80[1] = 0;
          auVar80[0] = auVar70[8];
          auVar80[2] = auVar70[9];
          auVar80[3] = 0;
          auVar80[4] = auVar70[10];
          auVar80[5] = 0;
          auVar80[6] = auVar70[0xb];
          auVar80[7] = 0;
          auVar80[8] = auVar70[0xc];
          auVar80[9] = 0;
          auVar80[10] = auVar70[0xd];
          auVar80[0xb] = 0;
          auVar80[0xc] = auVar70[0xe];
          auVar80[0xd] = 0;
          auVar80[0xe] = auVar70[0xf];
          auVar80[0xf] = 0;
          auVar81 = pshuflw(auVar80,auVar80,0x1b);
          auVar82 = pshufhw(auVar81,auVar81,0x1b);
          auVar7[0xd] = 0;
          auVar7._0_13_ = auVar70._0_13_;
          auVar7[0xe] = auVar70[7];
          auVar10[0xc] = auVar70[6];
          auVar10._0_12_ = auVar70._0_12_;
          auVar10._13_2_ = auVar7._13_2_;
          auVar13[0xb] = 0;
          auVar13._0_11_ = auVar70._0_11_;
          auVar13._12_3_ = auVar10._12_3_;
          auVar16[10] = auVar70[5];
          auVar16._0_10_ = auVar70._0_10_;
          auVar16._11_4_ = auVar13._11_4_;
          auVar19[9] = 0;
          auVar19._0_9_ = auVar70._0_9_;
          auVar19._10_5_ = auVar16._10_5_;
          auVar21[8] = auVar70[4];
          auVar21._0_8_ = auVar70._0_8_;
          auVar21._9_6_ = auVar19._9_6_;
          auVar29._7_8_ = 0;
          auVar29._0_7_ = auVar21._8_7_;
          auVar30._1_8_ = SUB158(auVar29 << 0x40,7);
          auVar30[0] = auVar70[3];
          auVar30._9_6_ = 0;
          auVar31._1_10_ = SUB1510(auVar30 << 0x30,5);
          auVar31[0] = auVar70[2];
          auVar31._11_4_ = 0;
          auVar24[2] = auVar70[1];
          auVar24._0_2_ = auVar70._0_2_;
          auVar24._3_12_ = SUB1512(auVar31 << 0x20,3);
          auVar81._0_2_ = auVar70._0_2_ & 0xff;
          auVar81._2_13_ = auVar24._2_13_;
          auVar81[0xf] = 0;
          auVar70 = pshuflw(auVar81,auVar81,0x1b);
          auVar70 = pshufhw(auVar70,auVar70,0x1b);
          sVar2 = auVar70._0_2_;
          sVar3 = auVar70._2_2_;
          sVar4 = auVar70._4_2_;
          sVar5 = auVar70._6_2_;
          iVar39 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar70[6] - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar70[4] - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar70[2] -
                                              (0xff < sVar3),
                                              (0 < sVar2) * (sVar2 < 0x100) * auVar70[0] -
                                              (0xff < sVar2))));
          sVar2 = auVar70._8_2_;
          sVar3 = auVar70._10_2_;
          sVar4 = auVar70._12_2_;
          sVar5 = auVar70._14_2_;
          auVar67._0_8_ =
               CONCAT17((0 < sVar5) * (sVar5 < 0x100) * auVar70[0xe] - (0xff < sVar5),
                        CONCAT16((0 < sVar4) * (sVar4 < 0x100) * auVar70[0xc] - (0xff < sVar4),
                                 CONCAT15((0 < sVar3) * (sVar3 < 0x100) * auVar70[10] -
                                          (0xff < sVar3),
                                          CONCAT14((0 < sVar2) * (sVar2 < 0x100) * auVar70[8] -
                                                   (0xff < sVar2),iVar39))));
          sVar2 = auVar82._0_2_;
          auVar67[8] = (0 < sVar2) * (sVar2 < 0x100) * auVar82[0] - (0xff < sVar2);
          sVar2 = auVar82._2_2_;
          auVar67[9] = (0 < sVar2) * (sVar2 < 0x100) * auVar82[2] - (0xff < sVar2);
          sVar2 = auVar82._4_2_;
          auVar67[10] = (0 < sVar2) * (sVar2 < 0x100) * auVar82[4] - (0xff < sVar2);
          sVar2 = auVar82._6_2_;
          auVar67[0xb] = (0 < sVar2) * (sVar2 < 0x100) * auVar82[6] - (0xff < sVar2);
          sVar2 = auVar82._8_2_;
          auVar71[0xc] = (0 < sVar2) * (sVar2 < 0x100) * auVar82[8] - (0xff < sVar2);
          auVar71._0_12_ = auVar67;
          sVar2 = auVar82._10_2_;
          auVar71[0xd] = (0 < sVar2) * (sVar2 < 0x100) * auVar82[10] - (0xff < sVar2);
          sVar2 = auVar82._12_2_;
          auVar71[0xe] = (0 < sVar2) * (sVar2 < 0x100) * auVar82[0xc] - (0xff < sVar2);
          sVar2 = auVar82._14_2_;
          auVar71[0xf] = (0 < sVar2) * (sVar2 < 0x100) * auVar82[0xe] - (0xff < sVar2);
          auVar83[1] = 0;
          auVar83[0] = auVar69[8];
          auVar83[2] = auVar69[9];
          auVar83[3] = 0;
          auVar83[4] = auVar69[10];
          auVar83[5] = 0;
          auVar83[6] = auVar69[0xb];
          auVar83[7] = 0;
          auVar83[8] = auVar69[0xc];
          auVar83[9] = 0;
          auVar83[10] = auVar69[0xd];
          auVar83[0xb] = 0;
          auVar83[0xc] = auVar69[0xe];
          auVar83[0xd] = 0;
          auVar83[0xe] = auVar69[0xf];
          auVar83[0xf] = 0;
          auVar70 = pshuflw(auVar83,auVar83,0x1b);
          auVar81 = pshufhw(auVar70,auVar70,0x1b);
          auVar8[0xd] = 0;
          auVar8._0_13_ = auVar69._0_13_;
          auVar8[0xe] = auVar69[7];
          auVar11[0xc] = auVar69[6];
          auVar11._0_12_ = auVar69._0_12_;
          auVar11._13_2_ = auVar8._13_2_;
          auVar14[0xb] = 0;
          auVar14._0_11_ = auVar69._0_11_;
          auVar14._12_3_ = auVar11._12_3_;
          auVar17[10] = auVar69[5];
          auVar17._0_10_ = auVar69._0_10_;
          auVar17._11_4_ = auVar14._11_4_;
          auVar20[9] = 0;
          auVar20._0_9_ = auVar69._0_9_;
          auVar20._10_5_ = auVar17._10_5_;
          auVar22[8] = auVar69[4];
          auVar22._0_8_ = auVar69._0_8_;
          auVar22._9_6_ = auVar20._9_6_;
          auVar32._7_8_ = 0;
          auVar32._0_7_ = auVar22._8_7_;
          auVar33._1_8_ = SUB158(auVar32 << 0x40,7);
          auVar33[0] = auVar69[3];
          auVar33._9_6_ = 0;
          auVar34._1_10_ = SUB1510(auVar33 << 0x30,5);
          auVar34[0] = auVar69[2];
          auVar34._11_4_ = 0;
          auVar25[2] = auVar69[1];
          auVar25._0_2_ = auVar69._0_2_;
          auVar25._3_12_ = SUB1512(auVar34 << 0x20,3);
          auVar75._0_2_ = auVar69._0_2_ & 0xff;
          auVar75._2_13_ = auVar25._2_13_;
          auVar75[0xf] = 0;
          auVar70 = pshuflw(auVar75,auVar75,0x1b);
          auVar70 = pshufhw(auVar70,auVar70,0x1b);
          sVar2 = auVar70._0_2_;
          sVar3 = auVar70._2_2_;
          sVar4 = auVar70._4_2_;
          sVar5 = auVar70._6_2_;
          iVar72 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar70[6] - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar70[4] - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar70[2] -
                                              (0xff < sVar3),
                                              (0 < sVar2) * (sVar2 < 0x100) * auVar70[0] -
                                              (0xff < sVar2))));
          sVar2 = auVar70._8_2_;
          sVar3 = auVar70._10_2_;
          sVar4 = auVar70._12_2_;
          sVar5 = auVar70._14_2_;
          auVar73._0_8_ =
               CONCAT17((0 < sVar5) * (sVar5 < 0x100) * auVar70[0xe] - (0xff < sVar5),
                        CONCAT16((0 < sVar4) * (sVar4 < 0x100) * auVar70[0xc] - (0xff < sVar4),
                                 CONCAT15((0 < sVar3) * (sVar3 < 0x100) * auVar70[10] -
                                          (0xff < sVar3),
                                          CONCAT14((0 < sVar2) * (sVar2 < 0x100) * auVar70[8] -
                                                   (0xff < sVar2),iVar72))));
          sVar2 = auVar81._0_2_;
          auVar73[8] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[0] - (0xff < sVar2);
          sVar2 = auVar81._2_2_;
          auVar73[9] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[2] - (0xff < sVar2);
          sVar2 = auVar81._4_2_;
          auVar73[10] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[4] - (0xff < sVar2);
          sVar2 = auVar81._6_2_;
          auVar73[0xb] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[6] - (0xff < sVar2);
          sVar2 = auVar81._8_2_;
          auVar76[0xc] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[8] - (0xff < sVar2);
          auVar76._0_12_ = auVar73;
          sVar2 = auVar81._10_2_;
          auVar76[0xd] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[10] - (0xff < sVar2);
          sVar2 = auVar81._12_2_;
          auVar76[0xe] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[0xc] - (0xff < sVar2);
          sVar2 = auVar81._14_2_;
          auVar76[0xf] = (0 < sVar2) * (sVar2 < 0x100) * auVar81[0xe] - (0xff < sVar2);
          auVar77._0_4_ = (float)iVar72 * fVar63;
          auVar77._4_4_ = (float)(int)((ulong)auVar73._0_8_ >> 0x20) * fVar79;
          auVar77._8_4_ = (float)auVar73._8_4_ * fVar62;
          auVar77._12_4_ = (float)auVar76._12_4_ * fVar64;
          pfVar1 = (float *)((long)pvVar42 + uVar50 * 4);
          *pfVar1 = (float)iVar39 * fVar63;
          pfVar1[1] = (float)(int)((ulong)auVar67._0_8_ >> 0x20) * fVar79;
          pfVar1[2] = (float)auVar67._8_4_ * fVar62;
          pfVar1[3] = (float)auVar71._12_4_ * fVar64;
          *(undefined1 (*) [16])((long)pvVar42 + uVar50 * 4 + 0x10) = auVar77;
          uVar50 = uVar50 + 8;
        } while (__size != (pthread_mutex_t *)uVar50);
        if (__size == (pthread_mutex_t *)(ulong)uVar51) goto LAB_00440890;
      }
      fVar63 = DAT_005de560;
      uVar50 = (long)in_R8 + uVar43 + (ulong)uVar46 * 0x14 + 4;
      do {
        uVar58 = *(uint *)(uVar50 + (long)__size * 4);
        *(float *)((long)pvVar42 + (long)__size * 4) =
             (float)(int)(uVar58 >> 0x18 | (uVar58 & 0xff0000) >> 8 | (uVar58 & 0xff00) << 8 |
                         uVar58 << 0x18) * fVar63;
        __size = (pthread_mutex_t *)(__size->__size + 1);
      } while ((pthread_mutex_t *)(ulong)uVar51 != __size);
      goto LAB_00440890;
    }
    local_48 = *(long *)(this + 0x20);
    puVar59 = hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
              ::get((hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>
                     *)(local_48 + 0xf8));
  }
  uVar38 = *(ushort *)(puVar59 + 2);
  lVar48 = 0;
  puVar60 = (undefined4 *)0x0;
  fVar63 = DAT_005de560;
  do {
    uVar45 = *(ushort *)(puVar59 + 1);
    puVar56 = &_hb_NullPool;
    if (uVar45 != 0) {
      puVar56 = (undefined4 *)((ulong)(ushort)(uVar45 << 8 | uVar45 >> 8) + (long)puVar59);
    }
    if (puVar60 < (undefined4 *)(ulong)(ushort)(uVar38 << 8 | uVar38 >> 8)) {
      puVar56 = (undefined4 *)((long)puVar56 + lVar48);
    }
    else {
      puVar56 = &_hb_NullPool;
    }
    uVar58 = puVar56[1];
    uVar51 = puVar56[2];
    uVar51 = uVar51 >> 0x18 | (uVar51 & 0xff0000) >> 8 | (uVar51 & 0xff00) << 8 | uVar51 << 0x18;
    uVar43 = (ulong)uVar51;
    fVar79 = *(float *)((long)pvVar42 + (long)puVar60 * 4);
    fVar64 = (float)(int)uVar51 * fVar63;
    fVar62 = (float)(int)(uVar58 >> 0x18 | (uVar58 & 0xff0000) >> 8 | (uVar58 & 0xff00) << 8 |
                         uVar58 << 0x18) * fVar63;
    uVar58 = -(uint)(fVar64 <= fVar62);
    fVar65 = (float)(~uVar58 & (uint)fVar62 | uVar58 & (uint)fVar64);
    uVar58 = puVar56[3];
    fVar62 = (float)(int)(uVar58 >> 0x18 | (uVar58 & 0xff0000) >> 8 | (uVar58 & 0xff00) << 8 |
                         uVar58 << 0x18) * fVar63;
    uVar58 = -(uint)(fVar62 <= fVar64);
    fVar62 = (float)(~uVar58 & (uint)fVar62 | uVar58 & (uint)fVar64);
    uVar58 = -(uint)(fVar65 <= fVar79);
    fVar79 = (float)(uVar58 & (uint)fVar79 | ~uVar58 & (uint)fVar65);
    uVar58 = -(uint)(fVar79 <= fVar62);
    fVar79 = (float)(~uVar58 & (uint)fVar62 | uVar58 & (uint)fVar79);
    uVar58 = 0;
    if ((fVar79 != fVar64) || (NAN(fVar79) || NAN(fVar64))) {
      fVar63 = floorf(((fVar79 - fVar64) /
                      (float)(~-(uint)(fVar79 < fVar64) & (uint)(fVar62 - fVar64) |
                             (uint)(fVar64 - fVar65) & -(uint)(fVar79 < fVar64))) * _DAT_005de5a4 +
                      DAT_005d9044);
      uVar58 = (uint)fVar63;
      uVar43 = extraout_RDX_01;
      fVar63 = DAT_005de560;
    }
    local_54 = (uint)uVar37;
    uVar50 = (ulong)uVar58;
    (&(local_50->__data).__lock)[(long)puVar60] = uVar58;
    puVar60 = (undefined4 *)((long)puVar60 + 1);
    lVar48 = lVar48 + 0x14;
  } while (puVar40 != puVar60);
  __size = local_50;
  in_R8 = puVar40;
LAB_00440a3f:
  this_00 = (avar *)hb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t>
                    ::get((hb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t>
                           *)(local_48 + 0x100),__size,uVar43,uVar50,in_R8);
  OT::avar::map_coords(this_00,(long)local_50,local_54);
  free(*(void **)(this + 0x80));
  free(*(void **)(this + 0x88));
  *(__pthread_mutex_s **)(this + 0x80) = &local_50->__data;
  *(void **)(this + 0x88) = pvVar42;
  *(uint *)(this + 0x78) = (uint)uVar37;
  hb_font_t::mults_changed(this);
  return this;
}


