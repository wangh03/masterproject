//####################################################################
//
//   Custom Visualization Core library
//   Copyright (C) 2011-2013 Ceetron AS
//
//   This library may be used under the terms of either the GNU General Public License or
//   the GNU Lesser General Public License as follows:
//
//   GNU General Public License Usage
//   This library is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
//   This library is distributed in the hope that it will be useful, but WITHOUT ANY
//   WARRANTY; without even the implied warranty of MERCHANTABILITY or
//   FITNESS FOR A PARTICULAR PURPOSE.
//
//   See the GNU General Public License at <<http://www.gnu.org/licenses/gpl.html>>
//   for more details.
//
//   GNU Lesser General Public License Usage
//   This library is free software; you can redistribute it and/or modify
//   it under the terms of the GNU Lesser General Public License as published by
//   the Free Software Foundation; either version 2.1 of the License, or
//   (at your option) any later version.
//
//   This library is distributed in the hope that it will be useful, but WITHOUT ANY
//   WARRANTY; without even the implied warranty of MERCHANTABILITY or
//   FITNESS FOR A PARTICULAR PURPOSE.
//
//   See the GNU Lesser General Public License at <<http://www.gnu.org/licenses/lgpl-2.1.html>>
//   for more details.
//
//####################################################################


#include "cvfBase.h"
#include "cvfVector3.h"
#include "cvfMath.h"

namespace cvf {

template<> Vector3<double> const Vector3<double>::UNDEFINED(UNDEFINED_DOUBLE, UNDEFINED_DOUBLE, UNDEFINED_DOUBLE);
template<> Vector3<float>  const Vector3<float>::UNDEFINED(UNDEFINED_FLOAT, UNDEFINED_FLOAT, UNDEFINED_FLOAT);
template<> Vector3<int>    const Vector3<int>::UNDEFINED(UNDEFINED_INT, UNDEFINED_INT, UNDEFINED_INT);
template<> Vector3<size_t> const Vector3<size_t>::UNDEFINED(UNDEFINED_SIZE_T, UNDEFINED_SIZE_T, UNDEFINED_SIZE_T);


} // namespace cvf
