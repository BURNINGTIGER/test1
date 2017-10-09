template <typename Iterator, typename T>
auto find_two_elements_with_sum(Iterator first, Iterator last, T c)->std::pair<bool, std::pair<Iterator, Iterator>>


{
	bool bl = 0;

	for (Iterator iter1 = first; iter1 != last; iter1++)

	{


		for (Iterator iter2 = last; iter2 != iter1; iter2--)

		{

			int sum = (*iter2 + *iter1);

			if (sum == c)
			{
				bl = 1;
				std::pair<Iterator, Iterator> pr1(iter1, iter2);
				std::pair<bool, std::pair<Iterator, Iterator>> pr2(bl, pr1);
				return pr2;
			}

		}

	}

}
