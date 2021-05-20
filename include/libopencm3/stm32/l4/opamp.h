/** @defgroup opamp_defines OPAMP Defines
 *
 * @brief <b>libopencm3 Defined Constants and Types for the STM32G4xx
 * Operational Amplifier module</b>
 *
 * @ingroup STM32G4xx_defines
 *
 * @version 1.0.0
 *
 * @date 10 Dec 2020
 *
 *LGPL License Terms @ref lgpl_license
 */
/*
 * This file is part of the libopencm3 project.
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBOPENCM3_OPAMP_H
#define LIBOPENCM3_OPAMP_H
/**@{*/

#define OPAMP1				(OPAMP_BASE + 0x00)

#define OPAMP_CSR(opamp_base)		MMIO32((opamp_base) + 0x00)


/**@}*/
#endif
