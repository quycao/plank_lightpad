//
//  Copyright (C) 2014 Rico Tzschichholz
//
//  This file is part of Plank.
//
//  Plank is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Plank is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

namespace Plank
{
	/**
	 * Like get_major_version, but from the headers used at application compile time,
	 * rather than from the library linked against at application run time
	 */
	public const int MAJOR_VERSION = 0;
	/**
	 * Like get_minor_version, but from the headers used at application compile time,
	 * rather than from the library linked against at application run time
	 */
	public const int MINOR_VERSION = 11;
	/**
	 * Like get_micro_version, but from the headers used at application compile time,
	 * rather than from the library linked against at application run time
	 */
	public const int MICRO_VERSION = 89;
	/**
	 * Like get_nano_version, but from the headers used at application compile time,
	 * rather than from the library linked against at application run time
	 */
	public const int NANO_VERSION = 0;

	/**
	 * Returns the major version number of the plank library.
	 *
	 * This function is in the library, so it represents the GTK+
	 * library your code is are running against.
	 *
	 * @return the major version number of the plank library
	 */
	public uint get_major_version () {
		return Build.VERSION_MAJOR;
	}
	
	/**
	 * Returns the minor version number of the plank library.
	 *
	 * This function is in the library, so it represents the plank
	 * library your code is are running against.
	 *
	 * @return the minor version number of the plank library
	 */
	public uint get_minor_version () {
		return Build.VERSION_MINOR;
	}
	
	/**
	 * Returns the micro version number of the plank library.
	 *
	 * This function is in the library, so it represents the plank
	 * library your code is are running against.
	 *
	 * @return the micro version number of the plank library
	 */
	public uint get_micro_version () {
		return Build.VERSION_MICRO;
	}
	
	/**
	 * Returns the nano version number of the plank library.
	 *
	 * This function is in the library, so it represents the plank
	 * library your code is are running against.
	 *
	 * @return the nano version number of the plank library
	 */
	public uint get_nano_version () {
		return Build.VERSION_NANO;
	}
	
	/**
	 * Checks that the plank library in use is compatible with the given version.
	 *
	 * This function is in the library, so it represents the plank
	 * library your code is are running against.
	 *
	 * @param required_major the required major version
	 * @param required_minor the required minor version
	 * @param required_micro the required micro version
	 * @return null if the plank library is compatible with the given version,
	 * or a string describing the version mismatch.
	 */
	public unowned string? check_version (uint required_major, uint required_minor, uint required_micro)
	{
		uint effective_micro = 100 * Build.VERSION_MINOR + Build.VERSION_MICRO;
		uint required_effective_micro = 100 * required_minor + required_micro;

		if (required_major > Build.VERSION_MAJOR)
			return "plank version too old (major mismatch)";
		
		if (required_effective_micro > effective_micro)
			return "plank version too old (micro mismatch)";
		
		return null;
	}
}

