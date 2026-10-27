// Function : hb_face_destroy
// Namespace: 
// Entry    : 0043cd50
// Prototype: undefined hb_face_destroy(int * param_1)
// Body     : 0043cd50 - 0043dcd7


void hb_face_destroy(int *param_1)

{
  pthread_mutex_t *ppVar1;
  int *piVar2;
  undefined8 *puVar3;
  accelerator_t *this;
  accelerator_t *this_00;
  accelerator_t *this_01;
  undefined4 *__ptr;
  accelerator_t *this_02;
  glyf_accelerator_t *this_03;
  accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
  *this_04;
  accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
  *this_05;
  accelerator_t *this_06;
  accelerator_t *this_07;
  accelerator_t *this_08;
  accelerator_t<OT::Layout::GSUB> *this_09;
  accelerator_t<OT::Layout::GPOS> *this_10;
  accelerator_t *this_11;
  accelerator_t *this_12;
  accelerator_t *this_13;
  accelerator_t *this_14;
  accelerator_t *this_15;
  accelerator_t *this_16;
  undefined8 *puVar4;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      *param_1 = -0xdead;
      ppVar1 = *(pthread_mutex_t **)(param_1 + 2);
      if (ppVar1 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar1[1].__data,ppVar1);
        free(ppVar1);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x6c);
      while (puVar4 != (undefined8 *)0x0) {
        piVar2 = (int *)*puVar4;
        puVar3 = (undefined8 *)puVar4[1];
        if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            *piVar2 = -0xdead;
            ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
            if (ppVar1 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar1[1].__data,ppVar1);
              free(ppVar1);
              piVar2[2] = 0;
              piVar2[3] = 0;
            }
            free(*(void **)(piVar2 + 0xe));
            piVar2[0xe] = 0;
            piVar2[0xf] = 0;
            hb_ot_shape_plan_t::~hb_ot_shape_plan_t((hb_ot_shape_plan_t *)(piVar2 + 0x18));
            free(piVar2);
          }
        }
        free(puVar4);
        puVar4 = puVar3;
      }
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      piVar2 = *(int **)(param_1 + 0x1c);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043cebc to 0043cebd has its CatchHandler @ 0043dd9f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      piVar2 = *(int **)(param_1 + 0x1e);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043cf2b to 0043cf2c has its CatchHandler @ 0043dd97 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      this = *(accelerator_t **)(param_1 + 0x20);
      if ((this != (accelerator_t *)0x0) && (this != (accelerator_t *)&_hb_NullPool)) {
        OT::cmap::accelerator_t::~accelerator_t(this);
        free(this);
      }
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      piVar2 = *(int **)(param_1 + 0x22);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043cfd2 to 0043cfd3 has its CatchHandler @ 0043dd8f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      this_00 = *(accelerator_t **)(param_1 + 0x24);
      if ((this_00 != (accelerator_t *)0x0) && (this_00 != (accelerator_t *)&_hb_NullPool)) {
        OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::~accelerator_t(this_00);
        free(this_00);
      }
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      piVar2 = *(int **)(param_1 + 0x26);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d07c to 0043d07d has its CatchHandler @ 0043dd87 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      this_01 = *(accelerator_t **)(param_1 + 0x28);
      if ((this_01 != (accelerator_t *)0x0) && (this_01 != (accelerator_t *)&_hb_NullPool)) {
        OT::post::accelerator_t::~accelerator_t(this_01);
        free(this_01);
      }
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      __ptr = *(undefined4 **)(param_1 + 0x2a);
      if ((__ptr != (undefined4 *)0x0) && (__ptr != &_hb_NullPool)) {
        piVar2 = *(int **)(__ptr + 4);
        if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            *piVar2 = -0xdead;
            ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
            if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0043d115 to 0043d11c has its CatchHandler @ 0043dcf0 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar1[1].__data,ppVar1);
              free(ppVar1);
              piVar2[2] = 0;
              piVar2[3] = 0;
            }
            if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d13a to 0043d13b has its CatchHandler @ 0043dce8 */
              (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
            }
            free(piVar2);
          }
        }
        *(undefined8 *)(__ptr + 4) = 0;
        if (__ptr[6] != 0) {
          __ptr[7] = 0;
          free(*(void **)(__ptr + 8));
        }
        *(undefined8 *)(__ptr + 6) = 0;
        *(undefined8 *)(__ptr + 8) = 0;
        free(__ptr);
      }
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      piVar2 = *(int **)(param_1 + 0x2c);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d1e2 to 0043d1e3 has its CatchHandler @ 0043dd7f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      puVar4 = *(undefined8 **)(param_1 + 0x2e);
      if ((puVar4 != (undefined8 *)0x0) && (puVar4 != (undefined8 *)&_hb_NullPool)) {
        piVar2 = (int *)*puVar4;
        if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            *piVar2 = -0xdead;
            ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
            if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0043d23a to 0043d241 has its CatchHandler @ 0043dce0 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar1[1].__data,ppVar1);
              free(ppVar1);
              piVar2[2] = 0;
              piVar2[3] = 0;
            }
            if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d25f to 0043d260 has its CatchHandler @ 0043dcd8 */
              (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
            }
            free(piVar2);
          }
        }
        *puVar4 = 0;
        free(puVar4);
      }
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      piVar2 = *(int **)(param_1 + 0x30);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d2e3 to 0043d2e4 has its CatchHandler @ 0043dd77 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      this_02 = *(accelerator_t **)(param_1 + 0x32);
      if ((this_02 != (accelerator_t *)0x0) && (this_02 != (accelerator_t *)&_hb_NullPool)) {
        OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::~accelerator_t(this_02);
        free(this_02);
      }
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      piVar2 = *(int **)(param_1 + 0x34);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d38d to 0043d38e has its CatchHandler @ 0043dd6f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x34] = 0;
      param_1[0x35] = 0;
      piVar2 = *(int **)(param_1 + 0x36);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d402 to 0043d403 has its CatchHandler @ 0043dd67 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      this_03 = *(glyf_accelerator_t **)(param_1 + 0x38);
      if ((this_03 != (glyf_accelerator_t *)0x0) && (this_03 != (glyf_accelerator_t *)&_hb_NullPool)
         ) {
        OT::glyf_accelerator_t::~glyf_accelerator_t(this_03);
        free(this_03);
      }
      param_1[0x38] = 0;
      param_1[0x39] = 0;
      this_04 = *(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                  **)(param_1 + 0x3a);
      if ((this_04 !=
           (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
            *)0x0) &&
         (this_04 !=
          (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
           *)&_hb_NullPool)) {
        piVar2 = *(int **)(this_04 + 0x130);
        if (piVar2 != (int *)0x0) {
          if (*piVar2 != 0) {
            piVar2[1] = 0;
            free(*(void **)(piVar2 + 2));
          }
          free(piVar2);
        }
        OT::cff1::
        accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
        ::~accelerator_templ_t(this_04);
        free(this_04);
      }
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      this_05 = *(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                  **)(param_1 + 0x3c);
      if ((this_05 !=
           (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
            *)0x0) &&
         (this_05 !=
          (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
           *)&_hb_NullPool)) {
        OT::cff2::
        accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
        ::~accelerator_templ_t(this_05);
        free(this_05);
      }
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      piVar2 = *(int **)(param_1 + 0x3e);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d541 to 0043d542 has its CatchHandler @ 0043dd5f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      piVar2 = *(int **)(param_1 + 0x40);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d5b6 to 0043d5b7 has its CatchHandler @ 0043dd57 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      piVar2 = *(int **)(param_1 + 0x42);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d62b to 0043d62c has its CatchHandler @ 0043dd4f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      this_06 = *(accelerator_t **)(param_1 + 0x44);
      if ((this_06 != (accelerator_t *)0x0) && (this_06 != (accelerator_t *)&_hb_NullPool)) {
        OT::gvar::accelerator_t::~accelerator_t(this_06);
        free(this_06);
      }
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      piVar2 = *(int **)(param_1 + 0x46);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d6d5 to 0043d6d6 has its CatchHandler @ 0043dd47 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      this_07 = *(accelerator_t **)(param_1 + 0x48);
      if ((this_07 != (accelerator_t *)0x0) && (this_07 != (accelerator_t *)&_hb_NullPool)) {
        OT::kern::accelerator_t::~accelerator_t(this_07);
        free(this_07);
      }
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      this_08 = *(accelerator_t **)(param_1 + 0x4a);
      if ((this_08 != (accelerator_t *)0x0) && (this_08 != (accelerator_t *)&_hb_NullPool)) {
        OT::GDEF::accelerator_t::~accelerator_t(this_08);
        free(this_08);
      }
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      this_09 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x4c);
      if ((this_09 != (accelerator_t<OT::Layout::GSUB> *)0x0) &&
         (this_09 != (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool)) {
        OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(this_09);
        free(this_09);
      }
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      this_10 = *(accelerator_t<OT::Layout::GPOS> **)(param_1 + 0x4e);
      if ((this_10 != (accelerator_t<OT::Layout::GPOS> *)0x0) &&
         (this_10 != (accelerator_t<OT::Layout::GPOS> *)&_hb_NullPool)) {
        OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t(this_10);
        free(this_10);
      }
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
      piVar2 = *(int **)(param_1 + 0x50);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d81e to 0043d81f has its CatchHandler @ 0043dd3f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x50] = 0;
      param_1[0x51] = 0;
      this_11 = *(accelerator_t **)(param_1 + 0x52);
      if ((this_11 != (accelerator_t *)0x0) && (this_11 != (accelerator_t *)&_hb_NullPool)) {
        AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::~accelerator_t
                  (this_11);
        free(this_11);
      }
      param_1[0x52] = 0;
      param_1[0x53] = 0;
      this_12 = *(accelerator_t **)(param_1 + 0x54);
      if ((this_12 != (accelerator_t *)0x0) && (this_12 != (accelerator_t *)&_hb_NullPool)) {
        AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::~accelerator_t
                  (this_12);
        free(this_12);
      }
      param_1[0x54] = 0;
      param_1[0x55] = 0;
      this_13 = *(accelerator_t **)(param_1 + 0x56);
      if ((this_13 != (accelerator_t *)0x0) && (this_13 != (accelerator_t *)&_hb_NullPool)) {
        AAT::KerxTable<AAT::kerx>::accelerator_t::~accelerator_t(this_13);
        free(this_13);
      }
      param_1[0x56] = 0;
      param_1[0x57] = 0;
      piVar2 = *(int **)(param_1 + 0x58);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d932 to 0043d933 has its CatchHandler @ 0043dd37 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x58] = 0;
      param_1[0x59] = 0;
      piVar2 = *(int **)(param_1 + 0x5a);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043d9a7 to 0043d9a8 has its CatchHandler @ 0043dd2f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x5a] = 0;
      param_1[0x5b] = 0;
      piVar2 = *(int **)(param_1 + 0x5c);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043da1c to 0043da1d has its CatchHandler @ 0043dd27 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x5c] = 0;
      param_1[0x5d] = 0;
      piVar2 = *(int **)(param_1 + 0x5e);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043da91 to 0043da92 has its CatchHandler @ 0043dd1f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x5e] = 0;
      param_1[0x5f] = 0;
      piVar2 = *(int **)(param_1 + 0x60);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043db06 to 0043db07 has its CatchHandler @ 0043dd17 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x60] = 0;
      param_1[0x61] = 0;
      piVar2 = *(int **)(param_1 + 0x62);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043db7b to 0043db7c has its CatchHandler @ 0043dd0f */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x62] = 0;
      param_1[99] = 0;
      this_14 = *(accelerator_t **)(param_1 + 100);
      if ((this_14 != (accelerator_t *)0x0) && (this_14 != (accelerator_t *)&_hb_NullPool)) {
        OT::CBDT::accelerator_t::~accelerator_t(this_14);
        free(this_14);
      }
      param_1[100] = 0;
      param_1[0x65] = 0;
      this_15 = *(accelerator_t **)(param_1 + 0x66);
      if ((this_15 != (accelerator_t *)0x0) && (this_15 != (accelerator_t *)&_hb_NullPool)) {
        OT::sbix::accelerator_t::~accelerator_t(this_15);
        free(this_15);
      }
      param_1[0x66] = 0;
      param_1[0x67] = 0;
      this_16 = *(accelerator_t **)(param_1 + 0x68);
      if ((this_16 != (accelerator_t *)0x0) && (this_16 != (accelerator_t *)&_hb_NullPool)) {
        OT::SVG::accelerator_t::~accelerator_t(this_16);
        free(this_16);
      }
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      piVar2 = *(int **)(param_1 + 0x6a);
      if (((piVar2 != (int *)0x0) && (piVar2 != &_hb_NullPool)) && (*piVar2 != 0)) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          *piVar2 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043dc8f to 0043dc90 has its CatchHandler @ 0043dd07 */
            (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          }
          free(piVar2);
        }
      }
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      if (*(code **)(param_1 + 0x12) != (code *)0x0) {
        (**(code **)(param_1 + 0x12))(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(code **)(param_1 + 0xc) != (code *)0x0) {
        (**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 10));
      }
      free(param_1);
      return;
    }
  }
  return;
}


