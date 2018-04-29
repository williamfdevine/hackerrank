/**
	print_pretty.cpp
*/

		long stripped = (long)A;
		long temp_a = stripped;
		uint32_t hex_digits = 0;
		while(temp_a)
		{
			temp_a /= 16;
			hex_digits++;
		}
		
		std::cout << std::showbase;
		std::cout << std::hex << std::nouppercase << setw(hex_digits) << stripped << std::endl;


		double temp_b = std::abs(B);
		double decimal_digits = 0;
		while(temp_b >= 1)
		{
			temp_b /= 10;
			decimal_digits++;
		}
		decimal_digits = 15 - decimal_digits - 3;

		std::cout.unsetf(std::ios::floatfield);
		std::cout << std::fixed << setprecision(2);
		std::cout << std::showbase << std::internal << setfill('_');
		std::cout << setw(decimal_digits) << ((B > 0) ? ("+") : ("-")) << std::abs(B) << std::endl;

		std::cout << setprecision(9) << std::scientific << std::uppercase << C << std::endl;