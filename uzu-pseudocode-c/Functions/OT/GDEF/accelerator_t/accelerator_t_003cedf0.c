// Function : accelerator_t
// Namespace: OT:GDEF:accelerator_t
// Entry    : 003cedf0
// Prototype: undefined accelerator_t(accelerator_t * this, long param_1, undefined8 param_2, undefined8 param_3, GDEFVersion1_2<OT::Layout::SmallTypes> * param_4)
// Body     : 003cedf0 - 003d0408


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::GDEF::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::GDEF::accelerator_t::accelerator_t
          (accelerator_t *this,long param_1,undefined8 param_2,undefined8 param_3,
          GDEFVersion1_2<OT::Layout::SmallTypes> *param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  pthread_mutex_t *ppVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  void *pvVar10;
  undefined4 *puVar11;
  short *psVar12;
  accelerator_t<OT::Layout::GSUB> *this_00;
  accelerator_t<OT::Layout::GPOS> *this_01;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 extraout_RDX;
  uint *puVar16;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar17;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  *phVar18;
  char cVar19;
  uint uVar20;
  Coverage *this_02;
  bool bVar21;
  short *local_c0;
  undefined4 local_b8 [2];
  GDEFVersion1_2<OT::Layout::SmallTypes> *local_b0;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  char local_90;
  int local_8c;
  int *local_88;
  uint local_80;
  undefined2 local_7c;
  accelerator_t *local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined1 local_34;
  undefined1 local_33;
  
  local_78 = this + 8;
  memset(this,0,0x218);
  *(undefined2 *)(this + 0x18) = 0xffff;
  *(undefined2 *)(this + 0x1a) = 0xffff;
  *(undefined2 *)(this + 0x1c) = 0xffff;
  *(undefined2 *)(this + 0x1e) = 0xffff;
  *(undefined2 *)(this + 0x20) = 0xffff;
  *(undefined2 *)(this + 0x22) = 0xffff;
  *(undefined2 *)(this + 0x24) = 0xffff;
  *(undefined2 *)(this + 0x26) = 0xffff;
  *(undefined2 *)(this + 0x28) = 0xffff;
  *(undefined2 *)(this + 0x2a) = 0xffff;
  *(undefined2 *)(this + 0x2c) = 0xffff;
  *(undefined2 *)(this + 0x2e) = 0xffff;
  *(undefined2 *)(this + 0x30) = 0xffff;
  *(undefined2 *)(this + 0x32) = 0xffff;
  *(undefined2 *)(this + 0x34) = 0xffff;
  *(undefined2 *)(this + 0x36) = 0xffff;
  *(undefined2 *)(this + 0x38) = 0xffff;
  *(undefined2 *)(this + 0x3a) = 0xffff;
  *(undefined2 *)(this + 0x3c) = 0xffff;
  *(undefined2 *)(this + 0x3e) = 0xffff;
  *(undefined2 *)(this + 0x40) = 0xffff;
  *(undefined2 *)(this + 0x42) = 0xffff;
  *(undefined2 *)(this + 0x44) = 0xffff;
  *(undefined2 *)(this + 0x46) = 0xffff;
  *(undefined2 *)(this + 0x48) = 0xffff;
  *(undefined2 *)(this + 0x4a) = 0xffff;
  *(undefined2 *)(this + 0x4c) = 0xffff;
  *(undefined2 *)(this + 0x4e) = 0xffff;
  *(undefined2 *)(this + 0x50) = 0xffff;
  *(undefined2 *)(this + 0x52) = 0xffff;
  *(undefined2 *)(this + 0x54) = 0xffff;
  *(undefined2 *)(this + 0x56) = 0xffff;
  *(undefined2 *)(this + 0x58) = 0xffff;
  *(undefined2 *)(this + 0x5a) = 0xffff;
  *(undefined2 *)(this + 0x5c) = 0xffff;
  *(undefined2 *)(this + 0x5e) = 0xffff;
  *(undefined2 *)(this + 0x60) = 0xffff;
  *(undefined2 *)(this + 0x62) = 0xffff;
  *(undefined2 *)(this + 100) = 0xffff;
  *(undefined2 *)(this + 0x66) = 0xffff;
  *(undefined2 *)(this + 0x68) = 0xffff;
  *(undefined2 *)(this + 0x6a) = 0xffff;
  *(undefined2 *)(this + 0x6c) = 0xffff;
  *(undefined2 *)(this + 0x6e) = 0xffff;
  *(undefined2 *)(this + 0x70) = 0xffff;
  *(undefined2 *)(this + 0x72) = 0xffff;
  *(undefined2 *)(this + 0x74) = 0xffff;
  *(undefined2 *)(this + 0x76) = 0xffff;
  *(undefined2 *)(this + 0x78) = 0xffff;
  *(undefined2 *)(this + 0x7a) = 0xffff;
  *(undefined2 *)(this + 0x7c) = 0xffff;
  *(undefined2 *)(this + 0x7e) = 0xffff;
  *(undefined2 *)(this + 0x80) = 0xffff;
  *(undefined2 *)(this + 0x82) = 0xffff;
  *(undefined2 *)(this + 0x84) = 0xffff;
  *(undefined2 *)(this + 0x86) = 0xffff;
  *(undefined2 *)(this + 0x88) = 0xffff;
  *(undefined2 *)(this + 0x8a) = 0xffff;
  *(undefined2 *)(this + 0x8c) = 0xffff;
  *(undefined2 *)(this + 0x8e) = 0xffff;
  *(undefined2 *)(this + 0x90) = 0xffff;
  *(undefined2 *)(this + 0x92) = 0xffff;
  *(undefined2 *)(this + 0x94) = 0xffff;
  *(undefined2 *)(this + 0x96) = 0xffff;
  *(undefined2 *)(this + 0x98) = 0xffff;
  *(undefined2 *)(this + 0x9a) = 0xffff;
  *(undefined2 *)(this + 0x9c) = 0xffff;
  *(undefined2 *)(this + 0x9e) = 0xffff;
  *(undefined2 *)(this + 0xa0) = 0xffff;
  *(undefined2 *)(this + 0xa2) = 0xffff;
  *(undefined2 *)(this + 0xa4) = 0xffff;
  *(undefined2 *)(this + 0xa6) = 0xffff;
  *(undefined2 *)(this + 0xa8) = 0xffff;
  *(undefined2 *)(this + 0xaa) = 0xffff;
  *(undefined2 *)(this + 0xac) = 0xffff;
  *(undefined2 *)(this + 0xae) = 0xffff;
  *(undefined2 *)(this + 0xb0) = 0xffff;
  *(undefined2 *)(this + 0xb2) = 0xffff;
  *(undefined2 *)(this + 0xb4) = 0xffff;
  *(undefined2 *)(this + 0xb6) = 0xffff;
  *(undefined2 *)(this + 0xb8) = 0xffff;
  *(undefined2 *)(this + 0xba) = 0xffff;
  *(undefined2 *)(this + 0xbc) = 0xffff;
  *(undefined2 *)(this + 0xbe) = 0xffff;
  *(undefined2 *)(this + 0xc0) = 0xffff;
  *(undefined2 *)(this + 0xc2) = 0xffff;
  *(undefined2 *)(this + 0xc4) = 0xffff;
  *(undefined2 *)(this + 0xc6) = 0xffff;
  *(undefined2 *)(this + 200) = 0xffff;
  *(undefined2 *)(this + 0xca) = 0xffff;
  *(undefined2 *)(this + 0xcc) = 0xffff;
  *(undefined2 *)(this + 0xce) = 0xffff;
  *(undefined2 *)(this + 0xd0) = 0xffff;
  *(undefined2 *)(this + 0xd2) = 0xffff;
  *(undefined2 *)(this + 0xd4) = 0xffff;
  *(undefined2 *)(this + 0xd6) = 0xffff;
  *(undefined2 *)(this + 0xd8) = 0xffff;
  *(undefined2 *)(this + 0xda) = 0xffff;
  *(undefined2 *)(this + 0xdc) = 0xffff;
  *(undefined2 *)(this + 0xde) = 0xffff;
  *(undefined2 *)(this + 0xe0) = 0xffff;
  *(undefined2 *)(this + 0xe2) = 0xffff;
  *(undefined2 *)(this + 0xe4) = 0xffff;
  *(undefined2 *)(this + 0xe6) = 0xffff;
  *(undefined2 *)(this + 0xe8) = 0xffff;
  *(undefined2 *)(this + 0xea) = 0xffff;
  *(undefined2 *)(this + 0xec) = 0xffff;
  *(undefined2 *)(this + 0xee) = 0xffff;
  *(undefined2 *)(this + 0xf0) = 0xffff;
  *(undefined2 *)(this + 0xf2) = 0xffff;
  *(undefined2 *)(this + 0xf4) = 0xffff;
  *(undefined2 *)(this + 0xf6) = 0xffff;
  *(undefined2 *)(this + 0xf8) = 0xffff;
  *(undefined2 *)(this + 0xfa) = 0xffff;
  *(undefined2 *)(this + 0xfc) = 0xffff;
  *(undefined2 *)(this + 0xfe) = 0xffff;
  *(undefined2 *)(this + 0x100) = 0xffff;
  *(undefined2 *)(this + 0x102) = 0xffff;
  *(undefined2 *)(this + 0x104) = 0xffff;
  *(undefined2 *)(this + 0x106) = 0xffff;
  *(undefined2 *)(this + 0x108) = 0xffff;
  *(undefined2 *)(this + 0x10a) = 0xffff;
  *(undefined2 *)(this + 0x10c) = 0xffff;
  *(undefined2 *)(this + 0x10e) = 0xffff;
  *(undefined2 *)(this + 0x110) = 0xffff;
  *(undefined2 *)(this + 0x112) = 0xffff;
  *(undefined2 *)(this + 0x114) = 0xffff;
  *(undefined2 *)(this + 0x116) = 0xffff;
  *(undefined2 *)(this + 0x118) = 0xffff;
  *(undefined2 *)(this + 0x11a) = 0xffff;
  *(undefined2 *)(this + 0x11c) = 0xffff;
  *(undefined2 *)(this + 0x11e) = 0xffff;
  *(undefined2 *)(this + 0x120) = 0xffff;
  *(undefined2 *)(this + 0x122) = 0xffff;
  *(undefined2 *)(this + 0x124) = 0xffff;
  *(undefined2 *)(this + 0x126) = 0xffff;
  *(undefined2 *)(this + 0x128) = 0xffff;
  *(undefined2 *)(this + 0x12a) = 0xffff;
  *(undefined2 *)(this + 300) = 0xffff;
  *(undefined2 *)(this + 0x12e) = 0xffff;
  *(undefined2 *)(this + 0x130) = 0xffff;
  *(undefined2 *)(this + 0x132) = 0xffff;
  *(undefined2 *)(this + 0x134) = 0xffff;
  *(undefined2 *)(this + 0x136) = 0xffff;
  *(undefined2 *)(this + 0x138) = 0xffff;
  *(undefined2 *)(this + 0x13a) = 0xffff;
  *(undefined2 *)(this + 0x13c) = 0xffff;
  *(undefined2 *)(this + 0x13e) = 0xffff;
  *(undefined2 *)(this + 0x140) = 0xffff;
  *(undefined2 *)(this + 0x142) = 0xffff;
  *(undefined2 *)(this + 0x144) = 0xffff;
  *(undefined2 *)(this + 0x146) = 0xffff;
  *(undefined2 *)(this + 0x148) = 0xffff;
  *(undefined2 *)(this + 0x14a) = 0xffff;
  *(undefined2 *)(this + 0x14c) = 0xffff;
  *(undefined2 *)(this + 0x14e) = 0xffff;
  *(undefined2 *)(this + 0x150) = 0xffff;
  *(undefined2 *)(this + 0x152) = 0xffff;
  *(undefined2 *)(this + 0x154) = 0xffff;
  *(undefined2 *)(this + 0x156) = 0xffff;
  *(undefined2 *)(this + 0x158) = 0xffff;
  *(undefined2 *)(this + 0x15a) = 0xffff;
  *(undefined2 *)(this + 0x15c) = 0xffff;
  *(undefined2 *)(this + 0x15e) = 0xffff;
  *(undefined2 *)(this + 0x160) = 0xffff;
  *(undefined2 *)(this + 0x162) = 0xffff;
  *(undefined2 *)(this + 0x164) = 0xffff;
  *(undefined2 *)(this + 0x166) = 0xffff;
  *(undefined2 *)(this + 0x168) = 0xffff;
  *(undefined2 *)(this + 0x16a) = 0xffff;
  *(undefined2 *)(this + 0x16c) = 0xffff;
  *(undefined2 *)(this + 0x16e) = 0xffff;
  *(undefined2 *)(this + 0x170) = 0xffff;
  *(undefined2 *)(this + 0x172) = 0xffff;
  *(undefined2 *)(this + 0x174) = 0xffff;
  *(undefined2 *)(this + 0x176) = 0xffff;
  *(undefined2 *)(this + 0x178) = 0xffff;
  *(undefined2 *)(this + 0x17a) = 0xffff;
  *(undefined2 *)(this + 0x17c) = 0xffff;
  *(undefined2 *)(this + 0x17e) = 0xffff;
  *(undefined2 *)(this + 0x180) = 0xffff;
  *(undefined2 *)(this + 0x182) = 0xffff;
  *(undefined2 *)(this + 0x184) = 0xffff;
  *(undefined2 *)(this + 0x186) = 0xffff;
  *(undefined2 *)(this + 0x188) = 0xffff;
  *(undefined2 *)(this + 0x18a) = 0xffff;
  *(undefined2 *)(this + 0x18c) = 0xffff;
  *(undefined2 *)(this + 0x18e) = 0xffff;
  *(undefined2 *)(this + 400) = 0xffff;
  *(undefined2 *)(this + 0x192) = 0xffff;
  *(undefined2 *)(this + 0x194) = 0xffff;
  *(undefined2 *)(this + 0x196) = 0xffff;
  *(undefined2 *)(this + 0x198) = 0xffff;
  *(undefined2 *)(this + 0x19a) = 0xffff;
  *(undefined2 *)(this + 0x19c) = 0xffff;
  *(undefined2 *)(this + 0x19e) = 0xffff;
  *(undefined2 *)(this + 0x1a0) = 0xffff;
  *(undefined2 *)(this + 0x1a2) = 0xffff;
  *(undefined2 *)(this + 0x1a4) = 0xffff;
  *(undefined2 *)(this + 0x1a6) = 0xffff;
  *(undefined2 *)(this + 0x1a8) = 0xffff;
  *(undefined2 *)(this + 0x1aa) = 0xffff;
  *(undefined2 *)(this + 0x1ac) = 0xffff;
  *(undefined2 *)(this + 0x1ae) = 0xffff;
  *(undefined2 *)(this + 0x1b0) = 0xffff;
  *(undefined2 *)(this + 0x1b2) = 0xffff;
  *(undefined2 *)(this + 0x1b4) = 0xffff;
  *(undefined2 *)(this + 0x1b6) = 0xffff;
  *(undefined2 *)(this + 0x1b8) = 0xffff;
  *(undefined2 *)(this + 0x1ba) = 0xffff;
  *(undefined2 *)(this + 0x1bc) = 0xffff;
  *(undefined2 *)(this + 0x1be) = 0xffff;
  *(undefined2 *)(this + 0x1c0) = 0xffff;
  *(undefined2 *)(this + 0x1c2) = 0xffff;
  *(undefined2 *)(this + 0x1c4) = 0xffff;
  *(undefined2 *)(this + 0x1c6) = 0xffff;
  *(undefined2 *)(this + 0x1c8) = 0xffff;
  *(undefined2 *)(this + 0x1ca) = 0xffff;
  *(undefined2 *)(this + 0x1cc) = 0xffff;
  *(undefined2 *)(this + 0x1ce) = 0xffff;
  *(undefined2 *)(this + 0x1d0) = 0xffff;
  *(undefined2 *)(this + 0x1d2) = 0xffff;
  *(undefined2 *)(this + 0x1d4) = 0xffff;
  *(undefined2 *)(this + 0x1d6) = 0xffff;
  *(undefined2 *)(this + 0x1d8) = 0xffff;
  *(undefined2 *)(this + 0x1da) = 0xffff;
  *(undefined2 *)(this + 0x1dc) = 0xffff;
  *(undefined2 *)(this + 0x1de) = 0xffff;
  *(undefined2 *)(this + 0x1e0) = 0xffff;
  *(undefined2 *)(this + 0x1e2) = 0xffff;
  *(undefined2 *)(this + 0x1e4) = 0xffff;
  *(undefined2 *)(this + 0x1e6) = 0xffff;
  *(undefined2 *)(this + 0x1e8) = 0xffff;
  *(undefined2 *)(this + 0x1ea) = 0xffff;
  *(undefined2 *)(this + 0x1ec) = 0xffff;
  *(undefined2 *)(this + 0x1ee) = 0xffff;
  *(undefined2 *)(this + 0x1f0) = 0xffff;
  *(undefined2 *)(this + 0x1f2) = 0xffff;
  *(undefined2 *)(this + 500) = 0xffff;
  *(undefined2 *)(this + 0x1f6) = 0xffff;
  *(undefined2 *)(this + 0x1f8) = 0xffff;
  *(undefined2 *)(this + 0x1fa) = 0xffff;
  *(undefined2 *)(this + 0x1fc) = 0xffff;
  *(undefined2 *)(this + 0x1fe) = 0xffff;
  *(undefined2 *)(this + 0x200) = 0xffff;
  *(undefined2 *)(this + 0x202) = 0xffff;
  *(undefined2 *)(this + 0x204) = 0xffff;
  *(undefined2 *)(this + 0x206) = 0xffff;
  *(undefined2 *)(this + 0x208) = 0xffff;
  *(undefined2 *)(this + 0x20a) = 0xffff;
  *(undefined2 *)(this + 0x20c) = 0xffff;
  *(undefined2 *)(this + 0x20e) = 0xffff;
  *(undefined2 *)(this + 0x210) = 0xffff;
  *(undefined2 *)(this + 0x212) = 0xffff;
  *(undefined2 *)(this + 0x214) = 0xffff;
  *(undefined2 *)(this + 0x216) = 0xffff;
  local_b8[0] = 0;
  local_8c = 0;
  local_88 = (int *)0x0;
  local_b0 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
  pGStack_a8 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_80 = 0x10000;
  local_7c = 0;
  uVar13 = *(uint *)(param_1 + 0x18);
  if (uVar13 == 0xffffffff) {
    piVar8 = *(int **)(param_1 + 0x78);
    if (piVar8 == (int *)0x0) {
      do {
        lVar5 = *(long *)(param_1 + 0x68);
        piVar8 = &_hb_NullPool;
        if (lVar5 == 0) goto LAB_003d017d;
        local_70[0] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_33 = 0;
        local_44 = 0;
        uStack_3c = 0;
        local_34 = 1;
        piVar8 = &_hb_NullPool;
                    /* try { // try from 003d0331 to 003d034b has its CatchHandler @ 003d0413 */
        if ((*(code **)(lVar5 + 0x20) != (code *)0x0) &&
           (piVar8 = (int *)(**(code **)(lVar5 + 0x20))
                                      (lVar5,0x6d617870,*(undefined8 *)(lVar5 + 0x28)),
           piVar8 == (int *)0x0)) {
          piVar8 = &_hb_NullPool;
        }
        piVar8 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar8);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar8 == (int *)0x0) {
          piVar8 = &_hb_NullPool;
          LOCK();
          bVar21 = *(long *)(param_1 + 0x78) == 0;
          if (bVar21) {
            *(long *)(param_1 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar21 = *(long *)(param_1 + 0x78) == 0;
          if (bVar21) {
            *(long *)(param_1 + 0x78) = (long)piVar8;
          }
          UNLOCK();
        }
        if (bVar21) goto LAB_003d017d;
        if (((piVar8 != (int *)0x0) && (piVar8 != &_hb_NullPool)) && (*piVar8 != 0)) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            *piVar8 = -0xdead;
            ppVar4 = *(pthread_mutex_t **)(piVar8 + 2);
            if (ppVar4 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d039e to 003d03a5 has its CatchHandler @ 003d0411 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar4[1].__data,ppVar4);
              free(ppVar4);
              piVar8[2] = 0;
              piVar8[3] = 0;
            }
            if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 003d03c3 to 003d03c4 has its CatchHandler @ 003d0409 */
              (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
            }
            free(piVar8);
          }
        }
        piVar8 = *(int **)(param_1 + 0x78);
      } while (piVar8 == (int *)0x0);
    }
LAB_003d017d:
    if ((uint)piVar8[6] < 6) {
      puVar11 = &_hb_NullPool;
    }
    else {
      puVar11 = *(undefined4 **)(piVar8 + 4);
    }
    uVar2 = *(ushort *)(puVar11 + 1);
    uVar13 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
    if (uVar2 == 0) {
      uVar13 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar13;
  }
  local_7c = CONCAT11(local_7c._1_1_,1);
  local_80 = uVar13;
                    /* try { // try from 003cf7eb to 003cf7f4 has its CatchHandler @ 003d0443 */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x47444546,*(undefined8 *)(param_1 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &_hb_NullPool;
    iVar3 = _hb_NullPool;
  }
  else {
    iVar3 = *piVar8;
  }
  if (iVar3 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  local_90 = '\0';
  local_88 = piVar8;
  while( true ) {
    pGVar17 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(local_88 + 4);
    uVar13 = local_88[6];
    uVar9 = (ulong)uVar13;
    bVar21 = (int)(uVar9 * 0x40 >> 0x20) != 0;
    uVar7 = (uint)(uVar9 * 0x40);
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    pGStack_a8 = pGVar17 + uVar9;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar20 = 0x3fffffff;
    if (!bVar21) {
      uVar20 = uVar7;
    }
    local_a0 = CONCAT44(uVar20,uVar13);
    local_8c = 0;
    local_b8[0] = 0;
    uStack_98 = uStack_98 & 0xffffffff;
    local_b0 = pGVar17;
    if (pGVar17 == (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) {
                    /* try { // try from 003d0148 to 003d0151 has its CatchHandler @ 003d0443 */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b8);
      goto LAB_003cfb6d;
    }
    if (uVar13 < 4) goto LAB_003cfa7c;
    cVar19 = '\x01';
    if (*(short *)pGVar17 != 0x100) goto LAB_003cfa7f;
                    /* try { // try from 003cf8db to 003cf8e7 has its CatchHandler @ 003d0445 */
    uVar9 = GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
                      (pGVar17,(long)local_b8,(ulong)bVar21,uVar9,param_4);
    if ((char)uVar9 != '\0') break;
    cVar19 = '\0';
    if ((local_8c == 0) || (local_90 != '\0')) goto LAB_003cfa7f;
    pGVar17 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uint)piVar8[6];
    if (piVar8[1] == 0) {
LAB_003cfa6e:
      local_b0 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
      pGStack_a8 = pGVar17;
      goto LAB_003cfa7c;
    }
    if (pGVar17 == (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) {
      piVar8[7] = 2;
LAB_003cf830:
      local_b0 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(piVar8 + 4);
      pGStack_a8 = pGVar17 + (long)local_b0;
      if (local_b0 == (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) goto LAB_003cfa7c;
    }
    else {
      if (piVar8[7] == 2) goto LAB_003cf830;
      if (piVar8[7] == 3) {
        piVar8[7] = 1;
      }
      pvVar10 = malloc((size_t)pGVar17);
      if (pvVar10 == (void *)0x0) goto LAB_003cfa6e;
      memcpy(pvVar10,*(void **)(piVar8 + 4),(size_t)pGVar17);
      if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 003cf96d to 003cf96e has its CatchHandler @ 003d0445 */
        (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
      }
      piVar8[7] = 2;
      *(void **)(piVar8 + 4) = pvVar10;
      *(void **)(piVar8 + 8) = pvVar10;
      *(undefined **)(piVar8 + 10) = PTR_free_00715540;
    }
    local_90 = '\x01';
  }
  if (local_8c == 0) goto LAB_003cfa7f;
  local_8c = 0;
  if (pGVar17 + (4 - (long)local_b0) <=
      (GDEFVersion1_2<OT::Layout::SmallTypes> *)(local_a0 & 0xffffffff)) {
    if (*(short *)pGVar17 != 0x100) goto LAB_003cfa7f;
                    /* try { // try from 003cf9d8 to 003cfa26 has its CatchHandler @ 003d0443 */
    uVar9 = GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
                      (pGVar17,(long)local_b8,extraout_RDX,
                       (GDEFVersion1_2<OT::Layout::SmallTypes> *)(local_a0 & 0xffffffff),param_4);
    piVar6 = local_88;
    if (local_8c == 0) {
      cVar19 = (char)uVar9;
      if (local_88 != (int *)0x0) goto LAB_003cfa89;
      goto LAB_003cfadd;
    }
    if ((local_88 != (int *)0x0) && (*local_88 != 0)) {
      LOCK();
      *local_88 = *local_88 + -1;
      UNLOCK();
      if (*local_88 == 0) {
        *local_88 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(local_88 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 003cfa44 to 003cfa45 has its CatchHandler @ 003d0426 */
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
        }
        free(piVar6);
      }
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    goto LAB_003cfb0f;
  }
LAB_003cfa7c:
  cVar19 = '\0';
LAB_003cfa7f:
  if (local_88 != (int *)0x0) {
LAB_003cfa89:
    piVar6 = local_88;
    if (*local_88 != 0) {
      LOCK();
      *local_88 = *local_88 + -1;
      UNLOCK();
      if (*local_88 == 0) {
        *local_88 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(local_88 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003cfaae to 003cfab5 has its CatchHandler @ 003d0443 */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 003cfad3 to 003cfad4 has its CatchHandler @ 003d0436 */
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
        }
        free(piVar6);
      }
    }
  }
LAB_003cfadd:
  local_88 = (int *)0x0;
  local_b0 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
  pGStack_a8 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
  local_a0 = local_a0 & 0xffffffff00000000;
  if (cVar19 == '\0') {
LAB_003cfb0f:
    local_88 = (int *)0x0;
    pGStack_a8 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
    local_b0 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
    if (*piVar8 != 0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        *piVar8 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(piVar8 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003cfb3b to 003cfb42 has its CatchHandler @ 003d0443 */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 003cfb60 to 003cfb61 has its CatchHandler @ 003d042e */
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        }
        free(piVar8);
      }
    }
    piVar8 = &_hb_NullPool;
  }
  else if (piVar8[1] != 0) {
    piVar8[1] = 0;
  }
LAB_003cfb6d:
  *(int **)this = piVar8;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b8);
  uVar13 = *(uint *)(*(long *)this + 0x18);
  this_00 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  while (this_00 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 == 0) {
LAB_003d020e:
      this_00 = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
      break;
    }
    this_00 = calloc(1,0x18);
    if (this_00 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      LOCK();
      bVar21 = *(long *)(param_1 + 0x130) == 0;
      if (bVar21) {
        *(long *)(param_1 + 0x130) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar21) goto LAB_003d020e;
    }
    else {
                    /* try { // try from 003d01b7 to 003d01c1 has its CatchHandler @ 003d0424 */
      GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(this_00,lVar5);
      LOCK();
      bVar21 = *(long *)(param_1 + 0x130) == 0;
      if (bVar21) {
        *(long *)(param_1 + 0x130) = (long)this_00;
      }
      UNLOCK();
      if (bVar21) break;
      GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(this_00);
      free(this_00);
    }
    this_00 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  }
  puVar11 = *(undefined4 **)this_00;
  local_c0 = (short *)&_hb_NullPool;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &_hb_NullPool;
  }
  uVar7 = puVar11[6];
  this_01 = *(accelerator_t<OT::Layout::GPOS> **)(param_1 + 0x138);
  while (this_01 == (accelerator_t<OT::Layout::GPOS> *)0x0) {
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 == 0) {
LAB_003d0294:
      this_01 = (accelerator_t<OT::Layout::GPOS> *)&_hb_NullPool;
      break;
    }
    this_01 = calloc(1,0x18);
    if (this_01 == (accelerator_t<OT::Layout::GPOS> *)0x0) {
      LOCK();
      bVar21 = *(long *)(param_1 + 0x138) == 0;
      if (bVar21) {
        *(long *)(param_1 + 0x138) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar21) goto LAB_003d0294;
    }
    else {
                    /* try { // try from 003d023d to 003d0247 has its CatchHandler @ 003d0422 */
      GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t(this_01,lVar5);
      LOCK();
      bVar21 = *(long *)(param_1 + 0x138) == 0;
      if (bVar21) {
        *(long *)(param_1 + 0x138) = (long)this_01;
      }
      UNLOCK();
      if (bVar21) break;
      GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t(this_01);
      free(this_01);
    }
    this_01 = *(accelerator_t<OT::Layout::GPOS> **)(param_1 + 0x138);
  }
  puVar11 = *(undefined4 **)this_01;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &_hb_NullPool;
  }
  uVar9 = (ulong)(uint)puVar11[6] | (ulong)uVar7 << 0x15 | (ulong)uVar13 << 0x2a;
  if (0xf100ba380eaa7 < (long)uVar9) {
    if ((long)uVar9 < 0xfe80bff80f572) {
      if ((long)uVar9 < 0xfb80bf2c0f12c) {
        if ((long)uVar9 < 0xf880bf340ebb0) {
          if (uVar9 != 0xf100ba380eaa8) {
            uVar14 = 0xf400ba300f010;
            goto LAB_003cff20;
          }
        }
        else if (uVar9 != 0xf880bf340ebb0) {
          uVar14 = 0xfb01cda8039f4;
          goto LAB_003cff20;
        }
      }
      else if ((long)uVar9 < 0xfb80c0000efa8) {
        if (uVar9 != 0xfb80bf2c0f12c) {
          uVar14 = 0xfb80c0000efa2;
          goto LAB_003cff20;
        }
      }
      else if (uVar9 != 0xfb80c0000efa8) {
        uVar14 = 0xfe80bff80f56c;
        goto LAB_003cff20;
      }
      goto LAB_003cff29;
    }
    if ((long)uVar9 < 0x108816f7002e2a) {
      if ((long)uVar9 < 0x1058230d8042d8) {
        if (uVar9 != 0xfe80bff80f572) {
          uVar14 = 0x105816f6c03138;
          goto LAB_003cff20;
        }
      }
      else if (uVar9 != 0x1058230d8042d8) {
        uVar14 = 0x1058230dc045c6;
        goto LAB_003cff20;
      }
    }
    else if ((long)uVar9 < 0x1088230e804182) {
      if (uVar9 != 0x108816f7002e2a) {
        uVar14 = 0x1088230e40446a;
        goto LAB_003cff20;
      }
    }
    else if ((uVar9 != 0x1088230e804182) && (uVar9 != 0x14c835aa00e252)) {
      uVar14 = 0x14c835aa00e65c;
      goto LAB_003cff20;
    }
    goto LAB_003cff29;
  }
  if ((long)uVar9 < 0x6e8016740a436) {
    if ((long)uVar9 < 0x3000632401c56) {
      if ((long)uVar9 < 0x2f00021000d62) {
        if (uVar9 != 0x2d0065fc01c56) {
          uVar14 = 0x2f0001f000f0c;
          goto LAB_003cff20;
        }
      }
      else if (uVar9 != 0x2f00021000d62) {
        uVar14 = 0x300062bc01c56;
        goto LAB_003cff20;
      }
    }
    else if ((long)uVar9 < 0x6b80167409ed6) {
      if (uVar9 != 0x3000632401c56) {
        uVar14 = 0x6b801674099ce;
        goto LAB_003cff20;
      }
    }
    else if (uVar9 != 0x6b80167409ed6) {
      uVar14 = 0x6e801674098cc;
      goto LAB_003cff20;
    }
    goto LAB_003cff29;
  }
  if ((long)uVar9 < 0xd300390c0b1a2) {
    if ((long)uVar9 < 0x7a8017cc0a2a6) {
      if (uVar9 != 0x6e8016740a436) {
        uVar14 = 0x778017cc0a3ae;
        goto LAB_003cff20;
      }
    }
    else if (uVar9 != 0x7a8017cc0a2a6) {
      uVar14 = 0xd00039380b83a;
      goto LAB_003cff20;
    }
  }
  else if ((long)uVar9 < 0xe380622c0ba74) {
    if (uVar9 != 0xd300390c0b1a2) {
      uVar14 = 0xe08062140b586;
      goto LAB_003cff20;
    }
  }
  else if ((uVar9 != 0xe380622c0ba74) && (uVar9 != 0xe800b6040e7c4)) {
    uVar14 = 0xeb00b61c0ed3c;
LAB_003cff20:
    if (uVar9 != uVar14) {
      puVar11 = *(undefined4 **)this;
      goto LAB_003cff3b;
    }
  }
LAB_003cff29:
                    /* try { // try from 003cff2c to 003cff30 has its CatchHandler @ 003d043e */
  hb_blob_destroy(*(int **)this);
  puVar11 = &_hb_NullPool;
  *(int **)this = &_hb_NullPool;
LAB_003cff3b:
  psVar12 = (short *)&_hb_NullPool;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &_hb_NullPool;
  }
  if (3 < (uint)puVar11[6]) {
    psVar12 = *(short **)(puVar11 + 4);
  }
  if ((*psVar12 == 0x100) &&
     (0x10001 < (((uint)(ushort)psVar12[1] | ((ushort)psVar12[1] & 0xff) << 0x10) >> 8 | 0x10000)))
  {
    uVar2 = psVar12[6];
    if (uVar2 == 0) {
      local_c0 = (short *)&_hb_NullPool;
    }
    else {
      local_c0 = (short *)((long)psVar12 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
    }
  }
  if ((*local_c0 == 0x100) && (uVar2 = local_c0[1], uVar2 != 0)) {
    puVar16 = (uint *)(local_c0 + 2);
    do {
      uVar13 = *puVar16;
      uVar7 = *(uint *)(this + 8);
      uVar20 = *(int *)(this + 0xc) + 1;
      if ((int)uVar20 < 0) {
        uVar20 = 0;
      }
      if ((int)uVar7 < 0) {
LAB_003d00d3:
        _hb_CrapPool = 0;
        _DAT_0071cd88 = 0;
        DAT_0071cd90 = 0;
        phVar18 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)&_hb_CrapPool;
      }
      else {
        if (uVar7 < uVar20) {
          uVar15 = uVar7;
          do {
            uVar15 = uVar15 + (uVar15 >> 1) + 8;
          } while (uVar15 < uVar20);
          if (0xaaaaaaa < uVar15) {
LAB_003d00ca:
            *(uint *)local_78 = ~uVar7;
            goto LAB_003d00d3;
          }
          if (uVar15 == 0) {
            free(*(void **)(this + 0x10));
            pvVar10 = (void *)0x0;
          }
          else {
            pvVar10 = realloc(*(void **)(this + 0x10),(ulong)uVar15 * 0x18);
            if (pvVar10 == (void *)0x0) {
              uVar7 = *(uint *)local_78;
              if (uVar15 <= uVar7) goto LAB_003d0005;
              goto LAB_003d00ca;
            }
          }
          *(void **)(this + 0x10) = pvVar10;
          *(uint *)(this + 8) = uVar15;
        }
LAB_003d0005:
        uVar7 = *(uint *)(this + 0xc);
        while (uVar7 < uVar20) {
          lVar5 = *(long *)(this + 0x10);
          puVar1 = (undefined8 *)(lVar5 + (ulong)uVar7 * 0x18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar5 + 0x10 + (ulong)uVar7 * 0x18) = 0;
          uVar7 = *(int *)(this + 0xc) + 1;
          *(uint *)(this + 0xc) = uVar7;
        }
        *(uint *)(this + 0xc) = uVar20;
        phVar18 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)((ulong)(uVar20 - 1) * 0x18 + *(long *)(this + 0x10));
      }
      this_02 = (Coverage *)&_hb_NullPool;
      if (uVar13 != 0) {
        this_02 = (Coverage *)
                  ((ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                          uVar13 << 0x18) + (long)local_c0);
      }
      Layout::Common::Coverage::
      collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                (this_02,phVar18);
      puVar16 = puVar16 + 1;
    } while (puVar16 != (uint *)(local_c0 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) * 2 + 2));
  }
  return;
}


