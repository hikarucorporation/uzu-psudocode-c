// Function : g_graph_setup
// Namespace: 
// Entry    : 00519100
// Prototype: undefined g_graph_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00519100 - 0051910e


void g_graph_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  g_graph_setup_class(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long **)PTR_canvas_class_00715918);
  return;
}


