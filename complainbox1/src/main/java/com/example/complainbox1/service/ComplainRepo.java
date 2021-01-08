package com.example.complainbox1.service;

import com.example.complainbox1.model.Complain;
import org.springframework.data.repository.CrudRepository;

public interface ComplainRepo extends CrudRepository<Complain,Integer>
{

        }