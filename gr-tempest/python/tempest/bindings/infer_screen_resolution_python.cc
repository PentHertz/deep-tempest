/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(infer_screen_resolution.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(520b0b6c7174f49b86d4f4a5bccba26c)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <tempest/infer_screen_resolution.h>
// pydoc.h is automatically generated in the build directory
#include <infer_screen_resolution_pydoc.h>

void bind_infer_screen_resolution(py::module& m)
{

    using infer_screen_resolution    = ::gr::tempest::infer_screen_resolution;


    py::class_<infer_screen_resolution, gr::block, gr::basic_block,
        std::shared_ptr<infer_screen_resolution>>(m, "infer_screen_resolution", D(infer_screen_resolution))

        .def(py::init(&infer_screen_resolution::make),
           py::arg("sample_rate"),
           py::arg("fft_size"),
           py::arg("refresh_rate"),
           py::arg("automatic_mode"),
           D(infer_screen_resolution,make)
        )
        


        
        .def("set_refresh_rate",&infer_screen_resolution::set_refresh_rate,       
            py::arg("refresh_rate"),
            D(infer_screen_resolution,set_refresh_rate)
        )



        ;




}








